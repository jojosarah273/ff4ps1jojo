/* FF4 source-port — interpreted module for func_800FBF50.
 * Ground truth: src/func_800FBF50.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FBF50(void)
{
    /* shop rows: 0x47/0x61 windows, loop L8FBF94 on 4120(0x202);
       4064(8)/8274(0x61) cells. */
    latch(0x80);
    txt_draw(0x2115);
    page(0x47);
    page(0x61);
L8fbf94:
    for (;;) {
        func_800F6C68();
        func_800F6C68();
        row_read(7);
        if (sel(0x202) != 0)
            continue;
        break;
    }
    row_prep(0x20);
    row_read2(0x61);
    sep_a();
    func_800F4064(8);
    func_800F8274(0x61);
    sep();
    stat_sync();
    row_prep_close();
    return;
}
