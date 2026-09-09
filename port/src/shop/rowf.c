/* FF4 source-port — interpreted module for func_801769B4.
 * Ground truth: src/func_801769B4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801769B4(void)
{
    /* shop sell-flow: 0x1700 header, 0x7A/0x12/0x13 rows, 0x2115/0x420B/
       0x4300/0x4301/0x4304 titles with 800F9868 catalog + 80181DA4
       commit; loop L176AF4 polls 5C64(0x202). */
    txt_set(0x1700);
    io_poll(3);
    if (io_just() == 0)
        return;
    row_page(0x7A);
    row_read(6);
    if (sel(2) == 0)
        return;
    row_page(0x7A);
    row_read(0x18);
    cell_put(0x12);
    open_row(0x13);
    row_prep(0x20);
    func_800F5024(cell_state(0x12));
    func_800F5024(cell_state(0x12));
    func_800F5024(cell_state(0x12));
    func_800F5024(cell_state(0x12));
    row_read2(0x12);
    sep_a();
    cell_pos_fwd(0x5000);
    cell_put_hi9(0x12);
    row_sync2_cur();
    row_prep_close();
    latch(0x80);
    txt_draw(0x2115);
    cell_clear_bank(0x420B);
    latch(1);
    txt_draw(0x4300);
    latch(0x18);
    txt_draw(0x4301);
    wnd_open(0x1200);
    label(0x2116);
    latch(0x7F);
    txt_draw(0x4304);
    draw_pad(4);
L176af4:
    for (;;) {
        page(0x12);
        label(0x4302);
        wnd_open(0x80);
        label(0x4305);
        catalog_dispatch();
        row_page(0x13);
        sep_a();
        row_open_w(2);
        cell_put(0x13);
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    func_80181DA4();
    return;
}
