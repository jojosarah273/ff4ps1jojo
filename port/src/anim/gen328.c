/* FF4 source-port — interpreted module for func_801767D8.
 * Ground truth: src/func_801767D8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801767D8(void)
{
    /* shop row: 0xFD8 title + 0x3E/0x3D windows (76BC/7CC8 pair cells),
       0x5000 gate, 8011F724-style sprint; loops L1768B4/L1768B8
       (4968/5A90(0x800)). */
    txt_set(0xFD8);
    func_800F6C68();
    cell_put(0x3E);
    open_row(0x3D);
    func_800F76BC(cell_state(0x3E));
    func_800F76E8();
    func_800F7CC8(cell_state(0x3D));
    row_page(0x3E);
    sep_a();
    cell_poke0(cell_peek_cur());
    cell_put(0x3E);
    page(0x3D);
    draw_pad_cur();
    latch(0x7F);
    func_800F9200();
    row_pad();
L1768B4:
    for (;;) {
    L1768b8:
        for (;;) {
            func_800F6C68();
            func_800F8960(0x5000);
            cell_step();
            step2();
            row_read(0xF);
            if (sel(0x202) != 0)
                goto L1768B4;
            goto L17690C;
        }
    L17690C:
        for (;;) {
            func_800F6C68();
            func_800F8960(0x5000);
            cell_step();
            step2();
            latch_cur();
            func_800F8960(0x5000);
            step2();
            row_read(0xF);
            if (sel(0x202) != 0)
                continue;
            break;
        }
        poll_t(0x800);
        if (io_just() == 0)
            continue;
        break;
    }
    latch_cur();
    func_800F9200();
    row_pad();
    return;
}
