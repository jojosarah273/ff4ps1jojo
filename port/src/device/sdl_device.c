/* FF4 source-port — device/sdl_device.c
 *
 * First device-layer cut: the deck's window API implemented on SDL2.
 * Debug renderer: the 0x20xx catalog codes are rendered as hex-glyph
 * text into a 64x32 cell screen (the PS1 VRAM cell abstraction); input
 * polls map SDL keys onto the PS1 pad bits.
 *
 * This is the "state-to-pixels" proof: interpreted menu logic drives
 * visible output through the semantic API. The glyph table (real text)
 * replaces the hex ids once the disc's PCI text data is decoded.
 */
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

#include "ff4_state.h"
#include "ff4_font.h"

#define CELL_W 64
#define CELL_H 32
#define BANK_BASE 0x800D0000u

static SDL_Window *g_win;
static SDL_Renderer *g_ren;
static uint8_t g_cell[CELL_H][CELL_W][3]; /* RGB per cell */
static uint32_t g_bank[0x4000];           /* catalog bank sim */
static int g_cursor;
static int g_battle;


/* runtime font bank: swap-able asset (mod feature + the hook for the
 * real data-table once the loader is traced). Falls back to the
 * built-in typeset when the file is absent. */
static unsigned char g_font_bank[79][8];
static int g_font_loaded;
static unsigned int g_bg[192 * 256];     /* 256x192 RGBA backdrop */
static int g_bg_loaded;
static unsigned int g_chars[72 * 240];   /* 5 party idle poses, 3x (240x72) */
static int g_chars_loaded;

/* sandbox (playable dev battler) surface: text overlay + sprite slots */
static uint32_t g_ov[640 * 480];          /* ARGB text overlay */
typedef struct { const unsigned int *px; int w, h, x, y; } bslot_t;
static bslot_t g_slots[8];
static int g_nslot;
static int g_sandbox;

static void ch_load_asset(void)
{
    static const char *names[] = {
        "port/assets/gfx/snes/battle_chars.rgba",
        "assets/gfx/snes/battle_chars.rgba",
        NULL,
    };
    FILE *f = NULL;
    int i;
    for (i = 0; names[i] && !f; i++)
        f = fopen(names[i], "rb");
    if (f) {
        size_t got = fread(g_chars, 1, sizeof(g_chars), f);
        fclose(f);
        g_chars_loaded = (got == sizeof(g_chars));
    }
}

static void bg_load_asset(void)
{
    static const char *names[] = {
        "port/assets/gfx/snes/battle_scene_00.rgba",
        "assets/gfx/snes/battle_scene_00.rgba",
        NULL,
    };
    FILE *f = NULL;
    int i;
    for (i = 0; names[i] && !f; i++)
        f = fopen(names[i], "rb");
    if (f) {
        size_t got = fread(g_bg, 1, sizeof(g_bg), f);
        fclose(f);
        g_bg_loaded = (got == sizeof(g_bg));
        if (g_bg_loaded)
            SDL_SetRenderDrawBlendMode(g_ren, SDL_BLENDMODE_BLEND);
    }
}

static void font_load_asset(void)
{
    /* default font chain (swappable without a rebuild):
     *   1. FF4_FONT=<path>         explicit override (the mod hook)
     *   2. font_ff4ttf_8x8.bin     the TTF recreation (default)
     *   3. font_ps1_letters_8x8.bin the confirmed PS1 rip (alternate)
     *   4. embedded static table   last resort
     * All banks share the 79-slot 8x8 1bpp layout, so swapping never
     * changes message formatting (fixed cell grid + measured widths). */
    static const char *chain[] = {
        "port/assets/font_ff4ttf_8x8.bin",
        "port/assets/font_ps1_letters_8x8.bin",
        NULL,
    };
    static char paths[3][64];
    const char *path = getenv("FF4_FONT");
    FILE *f;
    size_t got;
    int i, k;
    if (path)
        chain[0] = path;
    for (i = 0; i < 3; i++) {
        if (!chain[i])
            break;
        snprintf(paths[i], sizeof(paths[i]), "%s", chain[i]);
        {
            const char *trydirs[] = { "", "port/", "../", NULL };
            for (k = 0; trydirs[k]; k++) {
                snprintf(paths[i], sizeof(paths[i]), "%s%s", trydirs[k], chain[i]);
                f = fopen(paths[i], "rb");
            if (!f)
                continue;
                got = fread(g_font_bank, 1, sizeof(g_font_bank), f);
                fclose(f);
                if (got == sizeof(g_font_bank)) {
                    g_font_loaded = 1;
                    break;
                }
            }
            if (g_font_loaded)
                break;
        }
        got = fread(g_font_bank, 1, sizeof(g_font_bank), f);
        fclose(f);
        if (got == sizeof(g_font_bank)) {
            g_font_loaded = 1;
            break;
        }
    }
}

static input_state_t g_in;   /* host input latch (PS1 pad bits) */

uint32_t io_just(void);
uint32_t poll_go(uint32_t id);
uint32_t gate(uint32_t id);
uint32_t sel(uint32_t id);
uint32_t io_press(uint32_t c);

static const char hexd[] = "0123456789ABCDEF";

/* 8x8 ASCII bitmap font (public domain, classic font8x8 style):
 * 95 glyphs, 8 bytes/row, starting at 0x20. Bit set = pixel. */
static const unsigned char font8x8[95][8] = {
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, /*    */
    {0x18,0x18,0x18,0x18,0x18,0x00,0x18,0x00}, /* !  */
    {0x6C,0x6C,0x6C,0x00,0x00,0x00,0x00,0x00}, /* "  */
    {0x36,0x36,0x7F,0x36,0x7F,0x36,0x36,0x00}, /* #  */
    {0x0C,0x3E,0x03,0x1E,0x30,0x1F,0x0C,0x00}, /* $  */
    {0x00,0x63,0x33,0x18,0x0C,0x66,0x63,0x00}, /* %  */
    {0x1C,0x36,0x1C,0x6E,0x3B,0x33,0x6E,0x00}, /* &  */
    {0x06,0x06,0x03,0x00,0x00,0x00,0x00,0x00}, /* '  */
    {0x18,0x0C,0x06,0x06,0x06,0x0C,0x18,0x00}, /* (  */
    {0x06,0x0C,0x18,0x18,0x18,0x0C,0x06,0x00}, /* )  */
    {0x00,0x66,0x3C,0xFF,0x3C,0x66,0x00,0x00}, /* *  */
    {0x00,0x0C,0x0C,0x3F,0x0C,0x0C,0x00,0x00}, /* +  */
    {0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x06}, /* ,  */
    {0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00}, /* -  */
    {0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x00}, /* .  */
    {0x60,0x30,0x18,0x0C,0x06,0x03,0x01,0x00}, /* /  */
    {0x3E,0x63,0x73,0x7B,0x6F,0x67,0x3E,0x00}, /* 0  */
    {0x0C,0x0E,0x0C,0x0C,0x0C,0x0C,0x3F,0x00}, /* 1  */
    {0x1E,0x33,0x30,0x1C,0x06,0x33,0x3F,0x00}, /* 2  */
    {0x1E,0x33,0x30,0x1C,0x30,0x33,0x1E,0x00}, /* 3  */
    {0x38,0x3C,0x36,0x33,0x7F,0x30,0x78,0x00}, /* 4  */
    {0x3F,0x03,0x1F,0x30,0x30,0x33,0x1E,0x00}, /* 5  */
    {0x1C,0x06,0x03,0x1F,0x33,0x33,0x1E,0x00}, /* 6  */
    {0x3F,0x33,0x30,0x18,0x0C,0x0C,0x0C,0x00}, /* 7  */
    {0x1E,0x33,0x33,0x1E,0x33,0x33,0x1E,0x00}, /* 8  */
    {0x1E,0x33,0x33,0x3E,0x30,0x18,0x0E,0x00}, /* 9  */
    {0x00,0x0C,0x0C,0x00,0x00,0x0C,0x0C,0x00}, /* :  */
    {0x00,0x0C,0x0C,0x00,0x00,0x0C,0x0C,0x06}, /* ;  */
    {0x18,0x0C,0x06,0x03,0x06,0x0C,0x18,0x00}, /* <  */
    {0x00,0x00,0x3F,0x00,0x00,0x3F,0x00,0x00}, /* =  */
    {0x06,0x0C,0x18,0x30,0x18,0x0C,0x06,0x00}, /* >  */
    {0x1E,0x33,0x30,0x18,0x0C,0x00,0x0C,0x00}, /* ?  */
    {0x3E,0x63,0x7B,0x7B,0x7B,0x03,0x1E,0x00}, /* @  */
    {0x0C,0x1E,0x33,0x33,0x3F,0x33,0x33,0x00}, /* A  */
    {0x3F,0x66,0x66,0x3E,0x66,0x66,0x3F,0x00}, /* B  */
    {0x3C,0x66,0x03,0x03,0x03,0x66,0x3C,0x00}, /* C  */
    {0x1F,0x36,0x66,0x66,0x66,0x36,0x1F,0x00}, /* D  */
    {0x7F,0x46,0x16,0x1E,0x16,0x46,0x7F,0x00}, /* E  */
    {0x7F,0x46,0x16,0x1E,0x16,0x06,0x0F,0x00}, /* F  */
    {0x3C,0x66,0x03,0x03,0x73,0x66,0x7C,0x00}, /* G  */
    {0x33,0x33,0x33,0x3F,0x33,0x33,0x33,0x00}, /* H  */
    {0x1E,0x0C,0x0C,0x0C,0x0C,0x0C,0x1E,0x00}, /* I  */
    {0x78,0x30,0x30,0x30,0x33,0x33,0x1E,0x00}, /* J  */
    {0x67,0x66,0x36,0x1E,0x36,0x66,0x67,0x00}, /* K  */
    {0x0F,0x06,0x06,0x06,0x46,0x66,0x7F,0x00}, /* L  */
    {0x63,0x77,0x7F,0x7F,0x6B,0x63,0x63,0x00}, /* M  */
    {0x63,0x67,0x6F,0x7B,0x73,0x63,0x63,0x00}, /* N  */
    {0x1C,0x36,0x63,0x63,0x63,0x36,0x1C,0x00}, /* O  */
    {0x3F,0x66,0x66,0x3E,0x06,0x06,0x0F,0x00}, /* P  */
    {0x1E,0x33,0x33,0x33,0x3B,0x1E,0x38,0x00}, /* Q  */
    {0x3F,0x66,0x66,0x3E,0x36,0x66,0x67,0x00}, /* R  */
    {0x1E,0x33,0x07,0x0E,0x38,0x33,0x1E,0x00}, /* S  */
    {0x3F,0x2D,0x0C,0x0C,0x0C,0x0C,0x1E,0x00}, /* T  */
    {0x33,0x33,0x33,0x33,0x33,0x33,0x3F,0x00}, /* U  */
    {0x33,0x33,0x33,0x33,0x33,0x1E,0x0C,0x00}, /* V  */
    {0x63,0x63,0x63,0x6B,0x7F,0x77,0x63,0x00}, /* W  */
    {0x63,0x63,0x36,0x1C,0x1C,0x36,0x63,0x00}, /* X  */
    {0x33,0x33,0x33,0x1E,0x0C,0x0C,0x1E,0x00}, /* Y  */
    {0x7F,0x63,0x31,0x18,0x4C,0x66,0x7F,0x00}, /* Z  */
    {0x1E,0x06,0x06,0x06,0x06,0x06,0x1E,0x00}, /* [  */
    {0x03,0x06,0x0C,0x18,0x30,0x60,0x40,0x00}, /* backslash */
    {0x1E,0x18,0x18,0x18,0x18,0x18,0x1E,0x00}, /* ]  */
    {0x08,0x1C,0x36,0x63,0x00,0x00,0x00,0x00}, /* ^  */
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF}, /* _  */
    {0x0C,0x0C,0x18,0x00,0x00,0x00,0x00,0x00}, /* `  */
    {0x00,0x00,0x1E,0x30,0x3E,0x33,0x6E,0x00}, /* a  */
    {0x07,0x06,0x36,0x6E,0x66,0x66,0x3B,0x00}, /* b  */
    {0x00,0x00,0x1E,0x33,0x03,0x33,0x1E,0x00}, /* c  */
    {0x38,0x30,0x36,0x3E,0x33,0x33,0x6E,0x00}, /* d  */
    {0x00,0x00,0x1E,0x33,0x3F,0x03,0x1E,0x00}, /* e  */
    {0x1C,0x36,0x06,0x0F,0x06,0x06,0x0F,0x00}, /* f  */
    {0x00,0x00,0x6E,0x33,0x33,0x3E,0x30,0x1F}, /* g  */
    {0x07,0x06,0x36,0x6E,0x66,0x66,0x67,0x00}, /* h  */
    {0x0C,0x00,0x0E,0x0C,0x0C,0x0C,0x1E,0x00}, /* i  */
    {0x30,0x00,0x30,0x30,0x30,0x33,0x33,0x1E}, /* j  */
    {0x07,0x06,0x66,0x36,0x1E,0x36,0x67,0x00}, /* k  */
    {0x0E,0x0C,0x0C,0x0C,0x0C,0x0C,0x1E,0x00}, /* l  */
    {0x00,0x00,0x33,0x7F,0x7F,0x6B,0x63,0x00}, /* m  */
    {0x00,0x00,0x36,0x6E,0x66,0x66,0x67,0x00}, /* n  */
    {0x00,0x00,0x1E,0x33,0x33,0x33,0x1E,0x00}, /* o  */
    {0x00,0x00,0x3B,0x66,0x66,0x3E,0x06,0x0F}, /* p  */
    {0x00,0x00,0x6E,0x33,0x33,0x3E,0x30,0x78}, /* q  */
    {0x00,0x00,0x3B,0x6E,0x66,0x06,0x0F,0x00}, /* r  */
    {0x00,0x00,0x3E,0x03,0x1E,0x30,0x1F,0x00}, /* s  */
    {0x08,0x0C,0x3E,0x0C,0x0C,0x2C,0x18,0x00}, /* t  */
    {0x00,0x00,0x33,0x33,0x33,0x33,0x6E,0x00}, /* u  */
    {0x00,0x00,0x33,0x33,0x33,0x1E,0x0C,0x00}, /* v  */
    {0x00,0x00,0x63,0x6B,0x7F,0x7F,0x36,0x00}, /* w  */
    {0x00,0x00,0x63,0x36,0x1C,0x36,0x63,0x00}, /* x  */
    {0x00,0x00,0x33,0x33,0x33,0x3E,0x30,0x1F}, /* y  */
    {0x00,0x00,0x3F,0x19,0x0C,0x26,0x3F,0x00}, /* z  */
    {0x38,0x0C,0x0C,0x07,0x0C,0x0C,0x38,0x00}, /* {  */
    {0x18,0x18,0x18,0x00,0x18,0x18,0x18,0x00}, /* |  */
    {0x07,0x0C,0x0C,0x38,0x0C,0x0C,0x07,0x00}, /* }  */
    {0x6E,0x3B,0x00,0x00,0x00,0x00,0x00,0x00}, /* ~  */
};

/* PS1 cell-code -> host glyph (catalog 0x20xx page = charset page) */
static char cell_char(uint32_t code)
{
    unsigned c = code & 0xFF;
    if ((code & 0xFF00) == 0x2000 && c >= 0x20 && c <= 0x7E)
        return (char)c;
    return '?';
}

static void put_text(int x, int y, char c)
{
    int i, j;
    const unsigned char *g;
    if (!g_ren) return;
    if (x < 0 || x >= CELL_W || y < 0 || y >= CELL_H) return;
    /* prefer the runtime/static PS1 typeset (A-Z a-z 0-9 + symbols) */
    {
        int li = ff4_glyph_index(c);
        if (li >= 0)
            g = g_font_loaded ? g_font_bank[li] : ff4_glyphs_8x8[li];
        else
            g = font8x8[(unsigned char)c - 0x20];
    }
    for (j = 0; j < 8; j++) {
        for (i = 0; i < 8; i++) {
            SDL_Rect rr = { x * 8 + i, y * 16 + j * 2, 1, 2 };
                    if (g[j] & (0x80 >> i))
                SDL_SetRenderDrawColor(g_ren, g_cell[y][x][0], g_cell[y][x][1], g_cell[y][x][2], 255);
            else
                SDL_SetRenderDrawColor(g_ren, 30, 60, 90, 255);
            SDL_RenderFillRect(g_ren, &rr);
        }
    }
}

static void cell_text(uint32_t off, uint32_t code)
{
    int x = (off & 0xFF) / 2;      /* horizontal cell          */
    int y = (off >> 7) & 0x3F;     /* vertical cell            */
    int i;
    char c;
    if (y >= CELL_H || x >= CELL_W) return;
    c = cell_char(code);
    put_text(x, y, c);
    for (i = 0; i < 3; i++)
        g_cell[y][x][i] = (uint8_t)(code >> (8 * i));
}

/* ---- window API implemented on the cell bank ---- */
uint32_t cell_state(uint32_t off) { return BANK_BASE + (off & 0x3FFF); }
uint32_t cell_state_of(void)      { return cell_state(0); }
uint32_t cell_peek(void)          { return g_cursor; }
uint32_t wnd_open(uint32_t id)    { (void)id; return 0; }
void     wnd_open_cur(void)       { }
void     txt_set(uint32_t id)     { g_cursor = 0; (void)id; }
void     txt_set_cur(void)        { g_cursor = 0; }
void     txt_draw(uint32_t id)    { cell_text((uint32_t)g_cursor * 2, id); g_cursor++; }
void     txt_draw_cur(void)       { }
void     txt_cell(uint32_t id)    { txt_draw(id); }
void     cell_draw(uint32_t id)   { txt_draw(id); }
void     cell_draw_cur(void)      { }
void     cell_put(uint32_t id)    { cell_text((uint32_t)g_cursor * 2, id); g_cursor++; }
void     cell_put_cur(void)       { }
void     page(uint32_t id)        { (void)id; g_cursor = 0; }
void     page_cur(void)           { g_cursor = 0; }
void     page_open(uint32_t id)   { txt_draw(id); }
void     page_paint(uint32_t id)  { txt_draw(id); }
void     page_paint2(uint32_t id) { txt_draw(id); }
void     label(uint32_t id)       { txt_draw(id); }
void     label_cur(void)          { }
void     open_row(uint32_t id)    { g_cursor = 0; (void)id; }
void     open_row_cur(void)       { g_cursor = 0; }
void     tail(uint32_t id)        { txt_draw(id); }
void     tail_cur(void)           { }
void     latch(uint32_t id)       { (void)id; }
void     latch_cur(void)          { return; }
void     sep(void)                { g_cursor = 0; }
void     sep_a(void)              { }
void     sep_b(void)              { }
void     cell_step(void)          { g_cursor++; }
void     step2(void)              { g_cursor += 2; }
void     row_page(uint32_t id)    { (void)id; g_cursor = 0; }
void     row_read(uint32_t id)    { (void)id; }
void     row_prep(uint32_t id)    { (void)id; g_cursor = 0; }
void     row_prep_cur(void)       { g_cursor = 0; }
void     row_prep_close(void)     { g_cursor = 0; }
void     row_open(void)           { }
void     row_open2(void)          { }
void     row_close(void)          { }
void     row_done(void)           { }
void     draw_pad(uint32_t id)    { (void)id; }
void     key_page(uint32_t id)    { (void)id; }
void     poll_t(uint32_t t)       { (void)t; }
void     poll_t_cur(void)         { }
void     poll_pair(uint32_t id)   { (void)id; }
uint32_t poll_go(uint32_t id)     { (void)id; return io_just(); }
void     poll_go_cur(void)        { }
void     io_poll(uint32_t k)      { (void)k; }
void     io_poll_cur(void)        { }
static int g_autopress;      /* headless smoke: self-press        */


uint32_t io_just(void)
{
    /* headless smoke: auto-press after many polls so the menu cannot
       block forever without real input (only when g_autopress, i.e.
       SDL dummy driver or FF4_AUTOPRESS=1; real displays stay manual). */
    static int jc;
    static int hold;
    if (g_autopress) {
        if (hold > 0) {            /* a short held press (<=50 polls) */
            hold--;
            if (hold == 0)
                jc = 0;
            return 1;
        }
        if (jc++ > 4000) {         /* press every ~4000 polls          */
            hold = 50;
            return 1;
        }
    }
    return g_in.keypress;
}
uint32_t io_go(void)              { return io_just(); }
uint32_t gate(uint32_t id)        { (void)id; return io_just(); }
uint32_t sel(uint32_t id)         { (void)id; return io_just(); }
uint32_t io_press(uint32_t c)     { (void)c; return io_just(); }

/* input state — PS1 pad bits set by SDL events */


/* key-id translation (provisional): the game's io_poll codes map onto
   PS1 pad bits (Up=0x10 Right=0x20 Down=0x40 Left=0x80 Cross=0x40*,
   menu/confirm ids 2/3/0xFF = any). */
void device_poll_events(void)
{
    SDL_Event ev;
    g_in.pressed = 0;
    while (SDL_PollEvent(&ev)) {
        if (ev.type == SDL_KEYDOWN) {
            switch (ev.key.keysym.sym) {
            case SDLK_UP: g_in.pad |= 0x10; break;
            case SDLK_RIGHT: g_in.pad |= 0x20; break;
            case SDLK_DOWN: g_in.pad |= 0x40; break;
            case SDLK_LEFT: g_in.pad |= 0x80; break;
            case SDLK_RETURN: g_in.pad |= 0x4000; break; /* Cross */
            case SDLK_ESCAPE: g_in.pad |= 0x2000; break; /* Circle */
            case SDLK_q: g_in.pressed = 1; break;
            default: break;
            }
        }
        if (ev.type == SDL_KEYUP) {
            switch (ev.key.keysym.sym) {
            case SDLK_UP: g_in.pad &= ~0x10u; break;
            case SDLK_RIGHT: g_in.pad &= ~0x20u; break;
            case SDLK_DOWN: g_in.pad &= ~0x40u; break;
            case SDLK_LEFT: g_in.pad &= ~0x80u; break;
            case SDLK_RETURN: g_in.pad &= ~0x4000u; break;
            case SDLK_ESCAPE: g_in.pad &= ~0x2000u; break;
            default: break;
            }
        }
        if (ev.type == SDL_QUIT) { g_in.keypress = 0xFF; }
    }
    /* headless smoke (gated on g_autopress): confirm press every 300
       poll cycles so the menu can advance without real input. */
    if (g_autopress) {
        static int cyc;
        if (++cyc == 300)
            g_in.keypress = 1;
        if (cyc > 300)
            g_in.keypress = 0;
    }
    g_in.keypress = (g_in.pressed || g_in.pad) ? 1 : g_in.keypress;
}

void device_render(void)
{
    int x, y;
    if (!g_ren) return;
    SDL_SetRenderDrawColor(g_ren, 0, 10, 20, 255);
    SDL_RenderClear(g_ren);
    /* backdrop: the real SNES battle art, 2x into the 640x480 window */
    if (g_bg_loaded && g_battle) {
        SDL_Texture *tex = SDL_CreateTexture(g_ren, SDL_PIXELFORMAT_ABGR8888,
                                             SDL_TEXTUREACCESS_STATIC, 256, 192);
        if (tex) {
            SDL_UpdateTexture(tex, NULL, g_bg, 256 * 4);
            SDL_Rect dst = { 64, 48, 512, 384 };
            SDL_RenderCopy(g_ren, tex, NULL, &dst);
            SDL_DestroyTexture(tex);
        }
    }
    /* blit the 5 party characters over the backdrop (battle only) */
    if (g_chars_loaded && g_battle) {
        static const int px[5] = { 30, 78, 126, 174, 222 };
        static const int py = 335;
        SDL_Texture *tex = SDL_CreateTexture(g_ren, SDL_PIXELFORMAT_ABGR8888,
                                             SDL_TEXTUREACCESS_STATIC,
                                             240, 72);
        if (tex) {
            SDL_UpdateTexture(tex, NULL, g_chars, 240 * 4);
            for (int c = 0; c < 5; c++) {
                SDL_Rect src = { c * 48, 0, 48, 72 };
                SDL_Rect dst = { 64 + px[c], py, 48, 72 };
                SDL_RenderCopy(g_ren, tex, &src, &dst);
            }
            SDL_DestroyTexture(tex);
        }
    }
    /* blit the cell screen (the hex-glyph ids written by cell_put);
       skipped in sandbox mode (the dev battler paints its own UI) */
    if (!g_sandbox) {
        for (y = 0; y < CELL_H; y++) {
            for (x = 0; x < CELL_W; x++) {
                SDL_Rect rr = { x * 8, y * 16, 7, 15 };
                SDL_SetRenderDrawColor(g_ren,
                    g_cell[y][x][0] ? g_cell[y][x][0] : 8,
                    g_cell[y][x][1] ? g_cell[y][x][1] : 60,
                    g_cell[y][x][2] ? g_cell[y][x][2] : 90, 255);
                SDL_RenderFillRect(g_ren, &rr);
            }
        }
    }
    /* sandbox sprite slots (enemy etc); alpha blit */
    for (int s = 0; s < g_nslot; s++) {
        SDL_Texture *tex = SDL_CreateTexture(g_ren, SDL_PIXELFORMAT_ABGR8888,
                                             SDL_TEXTUREACCESS_STATIC,
                                             g_slots[s].w, g_slots[s].h);
        if (tex) {
            SDL_UpdateTexture(tex, NULL, g_slots[s].px, g_slots[s].w * 4);
            SDL_SetTextureBlendMode(tex, SDL_BLENDMODE_BLEND);
            SDL_Rect dst = { g_slots[s].x, g_slots[s].y,
                             g_slots[s].w, g_slots[s].h };
            SDL_RenderCopy(g_ren, tex, NULL, &dst);
            SDL_DestroyTexture(tex);
        }
    }
    /* text overlay (ARGB) */
    {
        SDL_Texture *tex = SDL_CreateTexture(g_ren, SDL_PIXELFORMAT_ARGB8888,
                                             SDL_TEXTUREACCESS_STATIC,
                                             640, 480);
        if (tex) {
            SDL_UpdateTexture(tex, NULL, g_ov, 640 * 4);
            SDL_SetTextureBlendMode(tex, SDL_BLENDMODE_BLEND);
            SDL_RenderCopy(g_ren, tex, NULL, NULL);
            SDL_DestroyTexture(tex);
        }
    }
    SDL_RenderPresent(g_ren);
}

static int is_headless(void)
{
    const char *drv = SDL_GetCurrentVideoDriver();
    const char *env = getenv("FF4_AUTOPRESS");
    if (drv && strstr(drv, "dummy") != 0)
        return 1;
    if (env && env[0] == '1')
        return 1;
    return 0;
}

int device_open_window(const char *title, int w, int h)
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
        return -1;
    g_win = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED,
                             SDL_WINDOWPOS_CENTERED, w, h, 0);
    if (!g_win)
        return -1;
    g_autopress = is_headless();
    font_load_asset();
    bg_load_asset();
    ch_load_asset();
    /* accelerated first, software fallback (remote-desktop friendly) */
    g_ren = SDL_CreateRenderer(g_win, -1, 0);
    if (!g_ren)
        g_ren = SDL_CreateRenderer(g_win, -1, SDL_RENDERER_SOFTWARE);
    return g_ren ? 0 : -1;
}

void device_close(void)
{
    /* debug: dump the cell screen to /tmp/ff4_screen.ppm (headless
       verification of the glyph layer) */
    {
        FILE *f = fopen("/tmp/ff4_screen.ppm", "wb");
        int y, x;
        if (f) {
            fprintf(f, "P6\n%d %d 255\n", CELL_W * 8, CELL_H * 16);
            for (y = 0; y < CELL_H; y++)
                for (x = 0; x < CELL_W; x++)
                    for (int k = 0; k < 8 * 16; k++) {
                        unsigned char px[3] = { g_cell[y][x][0], g_cell[y][x][1], g_cell[y][x][2] };
                        fwrite(px, 1, 3, f);
                    }
            fclose(f);
        }
    }
    if (g_sandbox) {
        FILE *f = fopen("/tmp/ff4_play.ppm", "wb");
        if (f) {
            fprintf(f, "P6\n640 480 255\n");
            for (int y = 0; y < 480; y++)
                for (int x = 0; x < 640; x++) {
                    uint32_t v = g_ov[y * 640 + x];
                    unsigned char px[3] = { (v >> 16) & 255, (v >> 8) & 255, v & 255 };
                    fwrite(px, 1, 3, f);
                }
            fclose(f);
        }
    }
    if (g_ren) SDL_DestroyRenderer(g_ren);
    if (g_win) SDL_DestroyWindow(g_win);
    SDL_Quit();
}

void device_set_sandbox(int on)   { g_sandbox = on; }
int  device_autopress(void)       { return g_autopress; }
uint32_t device_pad(void)         { return (uint32_t)g_in.pad; }
void device_sprite_reset(void)    { g_nslot = 0; }
void device_sprite(const unsigned int *px, int w, int h, int x, int y)
{
    if (g_nslot < 8) {
        g_slots[g_nslot].px = px; g_slots[g_nslot].w = w;
        g_slots[g_nslot].h = h; g_slots[g_nslot].x = x;
        g_slots[g_nslot].y = y;
        g_nslot++;
    }
}
void device_overlay_clear(void)   { memset(g_ov, 0, sizeof g_ov); }

void device_puts(int x, int y, uint32_t rgb, const char *s)
{
    /* 8x8 glyph at 2x into the ARGB overlay */
    while (s && *s && x < 640) {
        unsigned char c = (unsigned char)*s++;
        const unsigned char *g;
        if (c >= ' ' && c <= '~') {
            /* sandbox text = plain ASCII (font8x8); the TTF bank is the
               game charset and lacks space/punctuation slots */
            g = font8x8[c - 0x20];
        } else
            g = font8x8[0];
        for (int r = 0; r < 8; r++) {
            unsigned char row = g[r];
            for (int k = 0; k < 8; k++) {
                if (!(row & (0x80 >> k)))
                    continue;
                int xx = x + k * 2, yy = y + r * 2;
                if (xx >= 0 && yy >= 0 && xx + 1 < 640 && yy + 1 < 480) {
                    g_ov[yy * 640 + xx] = rgb;
                    g_ov[yy * 640 + xx + 1] = rgb;
                    g_ov[(yy + 1) * 640 + xx] = rgb;
                    g_ov[(yy + 1) * 640 + xx + 1] = rgb;
                }
            }
        }
        x += 16;
    }
}


/* boot tells the device which menu mode is active (for the backdrop) */
void device_set_mode(int battle) { g_battle = battle; }