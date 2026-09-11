/* FF4 source-port — story/intro.c
 *
 * The game's opening (storyboard v0) — the FIRST minutes of FF4:
 *
 *   title screen
 *     -> prologue scenes (Red Wings over the world)
 *     -> the ship dialogue (the crew's doubts, the crystal, "We are
 *        over Baron!")  [eventDialog1 32-37]
 *     -> Baigan + the King, the crystal, "You may leave now",
 *        Cecil's rebellion / dismissal  [eventDialog1 38-49]
 *
 * All lines are the REAL dialogue from the content pack
 * (port/data/intro_strings.h, generated from ff4-en-data.json); scenes
 * are THE REAL intro graphics (title/prologue from the ROM, palette-
 * correct). Control codes (\\charNN, \\n, \\song) resolved on export.
 *
 * v0 = storyboard sequencing. The next stage wires the actual event
 * opcode scripts (port/data/scripts.json) so scenes+lines+maps are
 * scripted by the game itself rather than this card list.
 */
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../../data/intro_strings.h"

extern void device_overlay_clear(void);
extern void device_puts(int x, int y, uint32_t rgb, const char *s);
extern void device_rect(int x0, int y0, int x1, int y1, uint32_t argb);
extern void device_sprite_reset(void);
extern void device_sprite_scaled(const unsigned int *px, int w, int h,
                                 int x, int y, int scale);
extern uint32_t device_pad(void);
extern int device_autopress(void);

typedef struct { unsigned int *px; int w, h; } sprite_t;

static sprite_t g_scene[3];     /* 0 title, 1 prologue_1, 2 prologue_2 */

static int load_rgba(const char *fn, sprite_t *s)
{
    static const char *dirs[] = { "port/assets/gfx/snes/intro/",
                                  "assets/gfx/snes/intro/",
                                  "../assets/gfx/snes/intro/",
                                  "../../assets/gfx/snes/intro/", NULL };
    char path[200];
    unsigned char hdr[8];
    FILE *f = NULL;
    for (int i = 0; dirs[i] && !f; i++) {
        snprintf(path, sizeof path, "%s%s", dirs[i], fn);
        f = fopen(path, "rb");
    }
    if (!f) return 0;
    if (fread(hdr, 1, 8, f) != 8) { fclose(f); return 0; }
    s->w = hdr[0] | hdr[1] << 8 | hdr[2] << 16 | (unsigned)hdr[3] << 24;
    s->h = hdr[4] | hdr[5] << 8 | hdr[6] << 16 | (unsigned)hdr[7] << 24;
    s->px = (unsigned int *)malloc((size_t)s->w * s->h * 4);
    size_t got = fread(s->px, 1, (size_t)s->w * s->h * 4, f);
    fclose(f);
    if (got != (size_t)s->w * s->h * 4 || !s->w || !s->h) {
        free(s->px); s->px = NULL; return 0;
    }
    return 1;
}

static int scene_idx(const char *file)
{
    if (strstr(file, "prologue_1")) return 1;
    if (strstr(file, "prologue_2")) return 2;
    return 0;
}

static void wrap_puts(int x, int y, int maxw, uint32_t rgb,
                      const char *text, int maxlines)
{
    /* print the card text wrapped at maxw chars/line, up to maxlines */
    char buf[128];
    int n = (int)strlen(text);
    int pos = 0, line = 0;
    while (pos < n && line < maxlines) {
        int take = maxw;
        if (pos + take > n) take = n - pos;
        /* prefer a word boundary just before maxw */
        if (pos + take < n) {
            int b = take;
            while (b > 12 && text[pos + b] != ' ') b--;
            if (b > 12) take = b;
        }
        memcpy(buf, text + pos, take);
        buf[take] = 0;
        device_puts(x, y + line * 18, rgb, buf);
        pos += take;
        while (pos < n && text[pos] == ' ') pos++;
        line++;
    }
}

static int s_phase;      /* 0 title  1 cards  2 end  3 done */
static int s_card;
static int s_frames;
static uint32_t s_prevpad;

int intro_run(void)
{
    static int s_boot = 1;
    int confirm = 0;
    if (s_boot) {
        s_boot = 0;
        load_rgba((const char *)"title.rgba", &g_scene[0]);
        load_rgba((const char *)"prologue_1.rgba", &g_scene[1]);
        load_rgba((const char *)"prologue_2.rgba", &g_scene[2]);
        s_phase = 0;
        s_card = 0;
    }
    if (s_phase == 3)
        return 0;
    if (getenv("FF4_GLYPH_TEST")) {
        /* deterministic glyph test: paint one fixed line, then done so
           the frame dump right after is a clean measurement target */
        device_overlay_clear();
        device_sprite_reset();
        device_puts(80, 60, 0xFFFFFFFFu,
                    "DPQR02AEC GHIJKLNS TUVZ WXY");
        s_phase = 3;
        return 1;
    }

    s_frames++;
    /* input: real pad edge or auto-advance timer */
    if (device_autopress()) {
        if (s_frames % (s_phase == 0 ? 300 : 220) == 60)
            confirm = 1;
    } else {
        uint32_t p = device_pad();
        uint32_t e = p & ~s_prevpad;
        s_prevpad = p;
        if (e & (0x4000 | 0x2000 | 0x10 | 0x40))  /* cross/circle/up/down */
            confirm = 1;
    }

    device_overlay_clear();
    device_sprite_reset();

    if (s_phase == 0) {
        if (g_scene[0].px)
            device_sprite_scaled(g_scene[0].px, g_scene[0].w, g_scene[0].h,
                                 64, 16, 2);
        device_rect(0, 430, 640, 462, 0xE0000000u);
        device_puts(24, 434, 0xFFFFF0C0u,
                    "FINAL FANTASY IV  (SNES decomp -> native)");
        device_puts(24, 452, 0xFFC0D0FFu,
                    "press a key to begin the adventure  |  esc exits");
        if (confirm)
            s_phase = 1;
        return 1;
    }

    if (s_phase == 1 && s_card < g_intro_cards_n) {
        const intro_card_t *c = &g_intro_cards[s_card];
        sprite_t *sc = &g_scene[scene_idx(c->file)];
        if (sc->px)
            device_sprite_scaled(sc->px, sc->w, sc->h, 64, 16, 2);
        device_rect(0, 336, 640, 478, 0xC8000000u);
        wrap_puts(24, 342, 38, 0xFFFFFFFFu, c->text, 6);
        device_puts(470, 460, 0xFF8080FFu, "enter: next");
        if (confirm) {
            s_card++;
            if (s_card >= g_intro_cards_n)
                s_phase = 2;
        }
        return 1;
    }

    if (s_phase == 2) {
        const intro_card_t *last = &g_intro_cards[g_intro_cards_n - 1];
        sprite_t *sc = &g_scene[scene_idx(last->file)];
        if (sc->px)
            device_sprite_scaled(sc->px, sc->w, sc->h, 64, 16, 2);
        device_rect(0, 336, 640, 478, 0xC0000000u);
        wrap_puts(24, 344, 38, 0xFFFFE0A0u,
                  "Cecil is dismissed from the Red Wings. The real "
                  "adventure - the content pack's 383 maps, 224 "
                  "monsters and the story engine - comes next.", 6);
        device_puts(24, 456, 0xFF90C0FFu,
                    "end of extract (storyboard v0)  |  esc exits");
        if (confirm) {
            s_phase = 3;   /* done */
        }
        return 1;
    }
    return 1;
}