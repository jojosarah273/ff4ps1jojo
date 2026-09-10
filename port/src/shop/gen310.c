/* FF4 source-port — interpreted module for global_stats_screen_x7d1f_gate_x4a.
 * Ground truth: src/global_stats_screen_x7d1f_gate_x4a.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void global_stats_screen_x7d1f_gate_x4a(void)
{
    /* global-stats screen: 0x7D1F gate, 0x4A window, 0x92/0x90 rows
       with 0x2116/0x4352/0x4354/0x4350/0x4351/0x4355 texts; renders
       via 800F9868; alt tail 8016D850. */
    txt_set(0x7D1F);
    if (gate(0x202) != 0)
        goto L16DB20;
    row_page(0x4A);
    row_read(0x1F);
    if (sel(0x202) != 0)
        goto L16DB20;
    row_open2();
    sep();
    cell_cursor_dec();
    row_pad();
    latch_cur();
    txt_draw(0x2115);
    page(0x92);
    label(0x2116);
    page(0x90);
    label(0x4352);
    latch(0x7E);
    txt_draw(0x4354);
    latch_cur();
    txt_draw(0x4350);
    latch(0x18);
    txt_draw(0x4351);
    wnd_open(0x80);
    label(0x4355);
    catalog_dispatch();
    latch(0x50);
    latch(0x80);
    txt_draw(0x2115);
    row_pad();
    row_prep(0x20);
    row_read2(0x90);
    sep_a();
    cell_pos_fwd(0x20);
    cell_pos_mask(0x7FFF);
    cell_put_hi9(0x90);
    row_read2(0x92);
    sep_a();
    cell_pos_fwd(0x80);
    cell_pos_mask(0x3FFF);
    cell_put_hi9(0x92);
    sep();
    row_prep_close();
    return;
L16DB20:
    fn_1x6d850();
    return;
}
