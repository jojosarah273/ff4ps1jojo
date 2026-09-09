/* FF4 source-port — battle/screens.c
 *
 * Battle menu screens (bytes-verified on the ladder lanes; exact
 * decodes). Primitive names follow the window layer.
 * Ground truth: src/func_80119DE4, 80119740, 8011DA88.
 */
#include <stdint.h>

void txt_set(uint32_t id);
void txt_draw(uint32_t id);
void cell_fmt(uint32_t id);
void row_page(uint32_t id);
void row_read(uint32_t id);
uint32_t gate(uint32_t id);
uint32_t io_sel(uint32_t key);
void latch(uint32_t id);
void open2(uint32_t id);
void panel_alpha(void);
void panel_beta(void);
void cursor_row(uint32_t id);
void ability_screen_a(void);   /* 80103790 */
void ability_screen_b(void);   /* 801038D4 */

/* 80119DE4: ability window — 0x1700 title, page select. */
void screens_ability(void)
{
    txt_set(0x1700);
    if (io_sel(2) != 0) {
        ability_screen_a();
    } else {
        ability_screen_b();
    }
    open2(0x79);
    open2(0x7A);
    open2(0x7B);
    latch(0x81);
    txt_draw(0x4200);
    panel_alpha();
    latch(0xF);
    txt_draw(0x2100);
    row_tail();
    screens_commit();           /* 8011EA5C */
}

/* 80119740: command screen — the stat trio painter. */
void screens_command(void)
{
    cursor_arm();
    stat_pair(0x89);
    open2(0x8A);
    stat_pair(0x89);
    stat_pair(0x8A);
    stat_pair(0x89);
    stat_pair(0x8A);
    repaint_loop();
}

/* 8011DA88: command row — 0x2115/0x4300 labels. */
void screens_row_cmd(void)
{
    row_page(0xAB);
    row_read(1);
    if (io_sel(0x202) == 0) {
        row_page(0xAB);
    }
    if (gate(0x202) == 0)
        return;
    latch(0x80);
    txt_draw(0x2115);
    row_tail2();
    latch(1);
    txt_draw(0x4300);
    page(0x99);
    tail(0x2116);
}
void cursor_arm(void);
void stat_pair(uint32_t id);
void repaint_loop(void);
void row_tail(void);
void screens_commit(void);
void row_tail2(void);
void page(uint32_t id);
void tail(uint32_t id);
