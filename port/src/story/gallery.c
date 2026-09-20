/* FF4 source-port — story/gallery.c
 *
 * "Where we really are", in one stable window. No auto-advance, no
 * auto-press: the gallery sits until you move it (left/right = exhibit,
 * enter = next dialogue card in the opener, esc = quit -> exit 0).
 *
 * Exhibits (all real extracted content):
 *   0 TITLE      the real title screen (palette-correct)
 *   1 PROLOGUE 1 the Red Wings flight scene
 *   2 PROLOGUE 2 the Baron/landing scene
 *   3 THE OPENER the real opening dialogue (eventDialog1 32..49)
 *   4 PARTY      the 5 verified party idle poses
 *   5 MONSTERS   the verified monster canvases (left/right)
 *   6 BATTLE     scene + party + monster (the play-mode visual)
 *
 * Headless smoke: 'gallery smoke' (or FF4_SMOKE=1) runs a bounded
 * number of frames then exits 0, so the harness stays CI-green.
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
extern void device_sprite(const unsigned int *px, int w, int h, int x, int y);
extern void device_sprite_scaled(const unsigned int *px, int w, int h,
                                 int x, int y, int scale);
extern uint32_t device_pad(void);
extern int device_autopress(void);

typedef struct { unsigned int *px; int w, h; } sprite_t;

#define N_EXHIBITS 7
static sprite_t g_title, g_p1, g_p2;          /* intro scenes      */
static sprite_t g_chars;                       /* party row 240x72  */
static int g_chars_ok;
static sprite_t g_enemy[4];                    /* monster canvases  */
static int g_enemy_ok[4];
static int s_exhibit;                           /* current exhibit   */
static int s_card;                              /* dialogue card idx */
static uint32_t s_prevpad;
static int s_smoke;

static int load_rgba(const char *dirs[], const char *fn, sprite_t *s)
{
    char path[220];
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

static void wrap_puts(int x, int y, int maxw, uint32_t rgb,
                      const char *text, int maxlines)
{
    char buf[128];
    int n = (int)strlen(text), pos = 0, line = 0;
    while (pos < n && line < maxlines) {
        int take = maxw;
        if (pos + take > n) take = n - pos;
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

int gallery_run(void)
{
    static int booted;
    int left = 0, right = 0, ok = 0, quit = 0;
    if (!booted) {
        booted = 1;
        static const char *intro_dir[] = { "port/assets/gfx/snes/intro/",
                                           "assets/gfx/snes/intro/",
                                           "../assets/gfx/snes/intro/",
                                           NULL };
        static const char *snes_dir[] = { "port/assets/gfx/snes/",
                                          "assets/gfx/snes/",
                                          "../assets/gfx/snes/",
                                          NULL };
        load_rgba(intro_dir, "title.rgba", &g_title);
        load_rgba(intro_dir, "prologue_1.rgba", &g_p1);
        load_rgba(intro_dir, "prologue_2.rgba", &g_p2);
        g_chars_ok = load_rgba(snes_dir, "battle_chars.rgba", &g_chars);
        g_enemy_ok[0] = load_rgba(snes_dir, "battle_enemy_fe_ZeromusHD.rgba", &g_enemy[0]);
        g_enemy_ok[1] = load_rgba(snes_dir, "battle_enemy_fe_Trainmus.rgba", &g_enemy[1]);
        g_enemy_ok[2] = load_rgba(snes_dir, "battle_enemy_fe_Kefkomus.rgba", &g_enemy[2]);
        g_enemy_ok[3] = load_rgba(snes_dir, "battle_enemy_golbez_display.rgba", &g_enemy[3]);
        if (getenv("FF4_SMOKE")) s_smoke = 1;
    }

    /* input (manual only; the gallery never auto-advances) */
    if (!s_smoke) {
        uint32_t p = device_pad();
        uint32_t e = p & ~s_prevpad;
        s_prevpad = p;
        if (e & (0x10 | 0x20)) right = 1;      /* up/right  = next   */
        if (e & (0x40 | 0x80)) left = 1;       /* down/left = prev   */
        if (e & 0x4000) ok = 1;                /* enter     = ok     */
        if (e & 0x2000) quit = 1;              /* esc       = quit   */
    }

    if (quit)
        return 0;

    device_overlay_clear();
    device_sprite_reset();

    static const char *names[N_EXHIBITS] = {
        "0: TITLE", "1: PROLOGUE - the Red Wings", "2: PROLOGUE - Baron",
        "3: THE OPENER - real dialogue", "4: PARTY - verified poses",
        "5: MONSTERS", "6: BATTLE mock"
    };
    static const char *hint = "left/right: exhibit | enter: next card | esc: quit";

    if (s_exhibit < 0) s_exhibit = 0;
    if (s_exhibit >= N_EXHIBITS) s_exhibit = 0;

    switch (s_exhibit) {
    case 0:
        if (g_title.px)
            device_sprite_scaled(g_title.px, g_title.w, g_title.h, 64, 16, 2);
        break;
    case 1:
        if (g_p1.px)
            device_sprite_scaled(g_p1.px, g_p1.w, g_p1.h, 64, 16, 2);
        break;
    case 2:
        if (g_p2.px)
            device_sprite_scaled(g_p2.px, g_p2.w, g_p2.h, 64, 16, 2);
        break;
    case 3: {
        if (s_card < 0) s_card = 0;
        if (s_card >= g_intro_cards_n) s_card = g_intro_cards_n - 1;
        const intro_card_t *c = &g_intro_cards[s_card];
        int sc = 1;
        if (c->file && strstr(c->file, "prologue_1")) sc = 1; else sc = 2;
        sprite_t *sp = (sc == 1) ? &g_p1 : &g_p2;
        if (sp->px)
            device_sprite_scaled(sp->px, sp->w, sp->h, 64, 16, 2);
        device_rect(0, 336, 640, 478, 0xC8000000u);
        wrap_puts(24, 342, 38, 0xFFFFFFFFu, c->text, 6);
        char b[40];
        snprintf(b, sizeof b, "card %d/%d", s_card + 1, g_intro_cards_n);
        device_puts(24, 460, 0xFF8080FFu, b);
        if (ok) s_card++;
        break;
    }
    case 4:
        if (g_chars_ok)
            device_sprite(g_chars.px, g_chars.w, g_chars.h, 200, 176);
        break;
    case 5: {
        static int m;
        if (right) m = (m + 1) % 4;
        if (left) m = (m + 3) % 4;
        if (g_enemy_ok[m])
            device_sprite(g_enemy[m].px, g_enemy[m].w, g_enemy[m].h,
                          320 - g_enemy[m].w / 2, 150);
        char b[32];
        snprintf(b, sizeof b, "monster %d/4", m + 1);
        device_puts(24, 356, 0xFFFFE0C0u, b);
        break;
    }
    case 6:
        if (g_p2.px)
            device_sprite_scaled(g_p2.px, g_p2.w, g_p2.h, 64, 16, 2);
        if (g_chars_ok)
            device_sprite(g_chars.px, g_chars.w, g_chars.h, 96, 356);
        if (g_enemy_ok[0])
            device_sprite(g_enemy[0].px, g_enemy[0].w, g_enemy[0].h, 420, 220);
        break;
    }

    device_rect(0, 0, 640, 14, 0xE0000000u);
    device_puts(8, 2, 0xFFFFE080u, names[s_exhibit]);
    device_puts(8, 464, 0xFFC0D0FFu, hint);

    if (right) s_exhibit++;
    if (left) s_exhibit--;

    return 1;
}