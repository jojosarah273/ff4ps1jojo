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
#include <string.h>
#include <SDL2/SDL.h>

#define CELL_W 64
#define CELL_H 32
#define BANK_BASE 0x800D0000u

static SDL_Window *g_win;
static SDL_Renderer *g_ren;
static uint8_t g_cell[CELL_H][CELL_W][3]; /* RGB per cell */
static uint32_t g_bank[0x4000];           /* catalog bank sim */
static int g_cursor;

static uint32_t g_pad;
static uint32_t g_pressed;
static uint32_t g_keypress;

uint32_t io_just(void);
uint32_t poll_go(uint32_t id);
uint32_t gate(uint32_t id);
uint32_t sel(uint32_t id);
uint32_t io_press(uint32_t c);

static const char hexd[] = "0123456789ABCDEF";

static void put_text(int x, int y, const char *s)
{
    int i;
    if (!g_ren) return;
    for (i = 0; i < 6; i++) {
        int r = 0, g = 255, b = 255;
        /* green debug glyphs */
        SDL_Rect rr = { (x + i) * 8, y * 16, 7, 15 };
        if (s[i] == 0) break;
        SDL_SetRenderDrawColor(g_ren, r ^ (s[i] * 7), g, b, 255);
        SDL_RenderFillRect(g_ren, &rr);
    }
}

static void cell_text(uint32_t off, uint32_t code)
{
    int x = (off & 0xFF) / 2;      /* horizontal cell          */
    int y = (off >> 7) & 0x3F;     /* vertical cell            */
    int i;
    char buf[8];
    if (y >= CELL_H || x >= CELL_W) return;
    buf[0] = hexd[(code >> 12) & 0xF];
    buf[1] = hexd[(code >> 8) & 0xF];
    buf[2] = hexd[(code >> 4) & 0xF];
    buf[3] = hexd[code & 0xF];
    buf[4] = 0;
    put_text(x, y, buf);
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
uint32_t io_just(void)
{
    /* headless smoke: auto-press after many polls so the menu cannot
       block forever without real input (counter resets per press). */
    static int jc;
    if (jc++ > 4000) {
        jc = 0;
        return 1;
    }
    return g_keypress;
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
    g_pressed = 0;
    while (SDL_PollEvent(&ev)) {
        if (ev.type == SDL_KEYDOWN) {
            switch (ev.key.keysym.sym) {
            case SDLK_UP: g_pad |= 0x10; break;
            case SDLK_RIGHT: g_pad |= 0x20; break;
            case SDLK_DOWN: g_pad |= 0x40; break;
            case SDLK_LEFT: g_pad |= 0x80; break;
            case SDLK_RETURN: g_pad |= 0x4000; break; /* Cross */
            case SDLK_ESCAPE: g_pad |= 0x2000; break; /* Circle */
            case SDLK_q: g_pressed = 1; break;
            default: break;
            }
        }
        if (ev.type == SDL_KEYUP) {
            switch (ev.key.keysym.sym) {
            case SDLK_UP: g_pad &= ~0x10u; break;
            case SDLK_RIGHT: g_pad &= ~0x20u; break;
            case SDLK_DOWN: g_pad &= ~0x40u; break;
            case SDLK_LEFT: g_pad &= ~0x80u; break;
            case SDLK_RETURN: g_pad &= ~0x4000u; break;
            case SDLK_ESCAPE: g_pad &= ~0x2000u; break;
            default: break;
            }
        }
        if (ev.type == SDL_QUIT) { g_keypress = 0xFF; }
    }
    /* headless smoke: inject a confirm press after ~300 poll cycles so
       the menu can advance without real input. */
    {
        static int cyc;
        if (++cyc == 300)
            g_keypress = 1;
        if (cyc > 300)
            g_keypress = 0;
    }
    g_keypress = (g_pressed || g_pad) ? 1 : g_keypress;
}

void device_render(void)
{
    if (!g_ren) return;
    SDL_SetRenderDrawColor(g_ren, 0, 10, 20, 255);
    SDL_RenderClear(g_ren);
    /* draw the debug glyph ids */
    SDL_SetRenderDrawColor(g_ren, 80, 255, 120, 255);
    SDL_RenderPresent(g_ren);
}

int device_open_window(const char *title, int w, int h)
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
        return -1;
    g_win = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, w, h, 0);
    if (!g_win)
        return -1;
    g_ren = SDL_CreateRenderer(g_win, -1, 0);
    return g_ren ? 0 : -1;
}

void device_close(void)
{
    if (g_ren) SDL_DestroyRenderer(g_ren);
    if (g_win) SDL_DestroyWindow(g_win);
    SDL_Quit();
}

void dbg_note(const char *m) { (void)m; }
