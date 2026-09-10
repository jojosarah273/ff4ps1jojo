/* FF4 source-port — battle/game.c
 *
 * Playable dev battler ("play" mode) — the bug-finding harness.
 *
 * This is NOT the game's own battle flow (that lives in the interpreted
 * deck: menu_root.c, dispatch.c, the 0x800F window primitives). This is
 * a small, persistent, frame-driven game loop that exercises the native
 * stack end-to-end (input polling, renderer, sprite blits, text overlay,
 * state machine) so engine/host bugs have a repeatable playground.
 *
 * Design notes:
 *  - state persists across frames; one call per frame from boot.
 *  - input: PS1 pad bits via device_pad() (real keys) or the built-in
 *    self-play driver under headless (FF4_AUTOPRESS/dummy driver) so the
 *    smoke run always terminates (all waves beatable -> quit, exit 0).
 *  - damage = the classic FF4-style formula (ATK*4 - DEF*2, ± variance),
 *    deliberate mirror, not the ROM's exact table (that is the deck's job).
 *  - art: verified party poses + FE-pipeline enemy canvases as .rgba.
 *  - all strings here are the port's own dev text (English ASCII).
 */
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern void device_overlay_clear(void);
extern void device_puts(int x, int y, uint32_t rgb, const char *s);
extern void device_sprite_reset(void);
extern void device_sprite(const unsigned int *px, int w, int h, int x, int y);
extern uint32_t device_pad(void);
extern int device_autopress(void);

/* ---- rng (LCG, dev) ---- */
static uint32_t s_rng = 0xF00D1234u;
static uint32_t rnd(void)
{
    s_rng = s_rng * 1103515245u + 12345u;
    return (s_rng >> 8) & 0xFFFFu;
}

/* ---- units ---- */
typedef struct {
    const char *name;
    int hp, mp, atk, def, maxhp, maxmp, dead;
} unit_t;

typedef struct {
    const char *name;
    int hp, atk, def, maxhp;
    int art;                 /* index into g_art[] */
} enemy_t;

static unit_t party[5] = {
    { "CECIL", 120, 20, 22, 14, 120, 20, 0 },
    { "KAIN", 105, 12, 24, 12, 105, 12, 0 },
    { "ROSA", 80, 60, 10, 8, 80, 60, 0 },
    { "RYDIA", 70, 70, 8, 6, 70, 70, 0 },
    { "EDGE", 90, 15, 26, 10, 90, 15, 0 },
};

static enemy_t s_enemy;
static const char *s_enemyname = "GREMLIN";

static const enemy_t WAVES[] = {
    { "GREMLIN", 60, 8, 6, 60, 2 },
    { "OGRET",  110, 12, 8, 110, 1 },
    { "SPECTER", 160, 14, 10, 160, 3 },
    { "TYRANT", 240, 18, 12, 240, 0 },
};
#define NWAVES 4

/* ---- art ---- */
typedef struct { unsigned int *px; int w, h; } sprite_t;
static sprite_t g_art[4];
static const char *g_artfile[4] = {
    "battle_enemy_golbez_display.rgba",
    "battle_enemy_fe_ZeromusHD.rgba",
    "battle_enemy_fe_Trainmus.rgba",
    "battle_enemy_fe_Kefkomus.rgba",
};

static int load_rgba(const char *fn, sprite_t *s)
{
    static const char *dirs[] = { "port/assets/gfx/snes/", "assets/gfx/snes/", NULL };
    char path[200];
    unsigned char hdr[8];
    FILE *f = NULL;
    for (int i = 0; dirs[i] && !f; i++) {
        snprintf(path, sizeof path, "%s%s", dirs[i], fn);
        f = fopen(path, "rb");
    }
    if (!f)
        return 0;
    if (fread(hdr, 1, 8, f) != 8) { fclose(f); return 0; }
    s->w = hdr[0] | hdr[1] << 8 | hdr[2] << 16 | (unsigned)hdr[3] << 24;
    s->h = hdr[4] | hdr[5] << 8 | hdr[6] << 16 | (unsigned)hdr[7] << 24;
    s->px = (unsigned int *)malloc((size_t)s->w * (size_t)s->h * 4);
    size_t got = fread(s->px, 1, (size_t)s->w * s->h * 4, f);
    fclose(f);
    if (got != (size_t)s->w * s->h * 4 || !s->w || !s->h) {
        free(s->px); s->px = NULL; return 0;
    }
    return 1;
}

/* ---- state ---- */
static int s_wave = 0;
static int s_phase = 0;        /* 0 = command, 1 = targeting, 2 = msg/pause */
static int s_menu = 0;         /* 0 fight 1 magic 2 item 3 run */
static int s_msg = 0;          /* message frame timer */
static char s_msgtext[64];
static int s_done;             /* won all waves */
static int s_quitting;         /* user quit / defeated */
static uint32_t s_prevpad;

static void begin_wave(int wave)
{
    const enemy_t *e = &WAVES[wave];
    s_enemy.hp = e->hp; s_enemy.maxhp = e->hp;
    s_enemy.atk = e->atk; s_enemy.def = e->def;
    s_enemy.art = e->art;
    s_enemyname = e->name;
    s_phase = 0;
    s_msg = 0;
    s_msgtext[0] = 0;
    /* soft reset between waves: revive, restore ~60% HP */
    for (int i = 0; i < 5; i++) {
        party[i].dead = 0;
        party[i].hp = party[i].maxhp * 3 / 5 + 1;
        if (party[i].hp > party[i].maxhp) party[i].hp = party[i].maxhp;
    }
}

static int alive_party(void)
{
    int n = 0;
    for (int i = 0; i < 5; i++)
        if (!party[i].dead) n++;
    return n;
}

static int lowest_hp(void)
{
    int best = -1, bv = 1 << 30;
    for (int i = 0; i < 5; i++) {
        if (party[i].dead) continue;
        if (party[i].hp < bv) { bv = party[i].hp; best = i; }
    }
    return best;
}

static void enemy_turn(void)
{
    int n = alive_party();
    if (n == 0) return;
    int t = rnd() % 5;
    while (party[t].dead) t = (t + 1) % 5;
    int d = 1 + s_enemy.atk + (int)(rnd() % (unsigned)(s_enemy.atk / 2 + 1));
    d -= party[t].def;
    if (d < 1) d = 1;
    party[t].hp -= d;
    if (party[t].hp <= 0) {
        party[t].hp = 0;
        party[t].dead = 1;
        snprintf(s_msgtext, sizeof s_msgtext, "%s K.O.!", party[t].name);
    } else {
        snprintf(s_msgtext, sizeof s_msgtext, "%s takes %d!", party[t].name, d);
    }
    s_phase = 2; s_msg = 40;
}

static void do_player_action(int sel)
{
    if (sel == 0) {                       /* FIGHT */
        int d = 1;
        int i = 0;
        /* the attacker: first alive non-dead */
        while (party[i].dead) i++;
        d = party[i].atk * 2 + (int)(rnd() % (unsigned)party[i].atk) - s_enemy.def * 2;
        if (d < 1) d = 1;
        s_enemy.hp -= d;
        if (s_enemy.hp <= 0) {
            s_enemy.hp = 0;
            snprintf(s_msgtext, sizeof s_msgtext, "VICTORY over %s!", s_enemyname);
            s_phase = 2; s_msg = 70;
            s_done = 1;                    /* wave cleared */
        } else {
            snprintf(s_msgtext, sizeof s_msgtext, "HIT! %s: %d", s_enemyname, d);
            s_phase = 2; s_msg = 40;
        }
        return;
    }
    if (sel == 1) {                       /* MAGIC: CURE lowest */
        int t = lowest_hp();
        int h = 60;
        if (t < 0) { snprintf(s_msgtext, sizeof s_msgtext, "No target."); }
        else {
            party[t].hp += h;
            if (party[t].hp > party[t].maxhp) party[t].hp = party[t].maxhp;
            snprintf(s_msgtext, sizeof s_msgtext, "CURE! %s +%d", party[t].name, h);
        }
        s_phase = 2; s_msg = 40;
        return;
    }
    if (sel == 2) {                       /* ITEM: potion */
        int t = lowest_hp();
        if (t < 0) { snprintf(s_msgtext, sizeof s_msgtext, "No target."); }
        else {
            party[t].hp += 30;
            if (party[t].hp > party[t].maxhp) party[t].hp = party[t].maxhp;
            snprintf(s_msgtext, sizeof s_msgtext, "POTION! %s +30", party[t].name);
        }
        s_phase = 2; s_msg = 40;
        return;
    }
    /* RUN */
    if ((rnd() & 1) || s_wave == NWAVES - 1) {
        snprintf(s_msgtext, sizeof s_msgtext, "Escaped!");
        s_phase = 2; s_msg = 50;
        s_done = 1;
    } else {
        snprintf(s_msgtext, sizeof s_msgtext, "Couldn't escape!");
        s_phase = 2; s_msg = 40;
    }
}

/* ---- input ---- */
static void read_input(int *dir, int *confirm, int *cancel)
{
    if (device_autopress()) {
        /* deterministic self-play so the smoke run always terminates */
        static int fp = 0;
        fp++;
        *dir = 0;
        if (fp % 24 == 4) *dir = 1;
        if (fp % 97 == 60) *confirm = 1;
        return;
    }
    uint32_t p = device_pad();
    uint32_t e = p & ~s_prevpad;
    s_prevpad = p;
    if (e & 0x10) *dir = -1;
    if (e & 0x40) *dir = 1;
    if (e & 0x4000) *confirm = 1;        /* Cross/Return */
    if (e & 0x2000) *cancel = 1;         /* Circle/Esc */
}

/* ---- frame ---- */
int battle_game_run(void)
{
    int dir = 0, confirm = 0, cancel = 0;
    static int s_boot = 1;
    if (s_boot) {
        s_boot = 0;
        s_rng = (uint32_t)0xDEADBEEF;
        for (int i = 0; i < 4; i++)
            load_rgba(g_artfile[i], &g_art[i]);
        begin_wave(0);
    }
    if (s_quitting)
        return 0;

    read_input(&dir, &confirm, &cancel);
    if (cancel)
        return 0;                          /* quit to shell */

    if (s_msg > 0) {
        s_msg--;
        if (s_msg == 0) {
            if (s_done) {                    /* win/run: advance */
                s_wave++;
                if (s_wave >= NWAVES) return 0;   /* all waves beaten */
                begin_wave(s_wave);
                s_done = 0;
            } else if (s_phase == 1) {       /* player acted -> enemy reply */
                enemy_turn();
                if (alive_party() == 0)
                    return 0;                /* party wiped: end run */
            } else {
                s_phase = 0;                 /* enemy acted -> back to command */
            }
        }
    } else if (s_phase == 0) {
        if (dir) {
            s_menu += dir;
            if (s_menu < 0) s_menu = 3;
            if (s_menu > 3) s_menu = 0;
        }
        if (confirm) {
            do_player_action(s_menu);
            if (!s_done)
                s_phase = 1;                 /* wait for player msg, then enemy */
        }
    }

    /* ---- render ---- */
    device_overlay_clear();
    device_sprite_reset();
    if (g_art[s_enemy.art].px)
        device_sprite(g_art[s_enemy.art].px, g_art[s_enemy.art].w,
                      g_art[s_enemy.art].h, 380, 150);

    /* status bar */
    device_puts(16, 8, 0xFFFFE0FFu, "PARTY");
    for (int i = 0; i < 5; i++) {
        char b[64];
        snprintf(b, sizeof b, "%s %4d/%4d", party[i].name,
                 party[i].dead ? 0 : party[i].hp, party[i].maxhp);
        device_puts(16, 8 + (i + 1) * 20, party[i].dead ? 0xFF4040FFu : 0xFFFFFFFFu, b);
    }
    {
        char b[80];
        snprintf(b, sizeof b, "%s  HP %4d/%4d   (wave %d/%d)", s_enemyname,
                 s_enemy.hp, s_enemy.maxhp, s_wave + 1, NWAVES);
        device_puts(380, 140, 0xFF80E0FFu, b);
    }
    /* command menu */
    static const char *cmd[4] = { "FIGHT", "MAGIC", "ITEM", "RUN" };
    device_puts(24, 360, 0xFFFFFFFFu, " COMMAND");
    for (int i = 0; i < 4; i++) {
        char b[24];
        snprintf(b, sizeof b, "%c %s", i == s_menu ? '>' : ' ', cmd[i]);
        device_puts(24, 360 + (i + 1) * 18, i == s_menu ? 0xFFFFD0FFu : 0xFFFFFFFFu, b);
    }
    /* message line */
    if (s_msg > 0 || s_msgtext[0]) {
        char b[96];
        snprintf(b, sizeof b, "> %s", s_msgtext);
        device_puts(200, 420, 0xFFFFFF80u, b);
    }
    device_puts(16, 456, 0xFF8080FFu, "arrows: select  |  enter: confirm  |  esc: quit");
    return 1;
}