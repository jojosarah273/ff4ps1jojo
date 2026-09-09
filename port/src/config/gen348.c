/* FF4 source-port — interpreted module for func_8012A678.
 * Ground truth: src/func_8012A678.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012A678(void)
{
    /* config block: 0x1B23/0x1B22/0x1B19/0x1B25 texts, 0x3F window,
       8011F724 rows, 8012B0D8 alt; gates on 6434(2). */
    row_sync();
    latch(0x20);
    cell_put(0x3F);
    txt_set(0x1B23);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_open_w(0x36);
    stat_sync();
    txt_set(0x1B22);
    if (gate(2) != 0)
        goto L12A6F8;
    latch(0x6C);
L12A6F8:
    sep_a();
    row_open_w(4);
    draw_pad(0x300);
    row_latch_7e();
    txt_set(0x1B19);
    if (gate(2) != 0)
        goto L12A850;
    txt_set(0x1B25);
    sep_b();
    cell_tick_sub(cell_state(0x1B1A));
    io_poll(0xFC);
    if (io_go() != 0)
        goto L12A7B0;
    io_poll_cur();
    if (cell_flags_hi7() != 0)
        goto L12A848;
    io_poll(0xB);
    if (io_go() != 0)
        goto L12A848;
L12A7B0:
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_open_w(0x36);
    stat_sync();
    txt_set(0x1B24);
    if (gate(2) != 0)
        goto L12A808;
    latch(0x70);
L12A808:
    sep_a();
    row_open_w(8);
    draw_pad(0x310);
    row_latch_7e();
    return;
L12A848:
    animation_row_310();
    return;
L12A850:
    row_done();
    return;
}
