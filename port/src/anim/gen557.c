/* FF4 source-port — interpreted module for func_801745F4.
 * Ground truth: src/func_801745F4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801745F4(void)
{
    /* shop title: 0xFE0/0x19/0x18 windows, 0xCDB/0xCEB texts,
       73E0(0x202) gates; loops L17464C and L174650. */
    txt_set(0xFE0);
    cell_put(0x19);
    open_row(0x18);
    func_800F76BC(cell_state(0x19));
    func_800F76E8();
    func_800F7CC8(cell_state(0x18));
    page(0x18);
    draw_pad(0x20);
L17464C:
    for (;;) {
    L174650:
        for (;;) {
            func_800F6C68();
            func_800F8960(0xCDB);
            func_800F6C68();
            func_800F8960(0xCEB);
            cell_step();
            step2();
            row_read(0xF);
            if (sel(0x202) != 0)
                goto L17464C;
            break;
        }
        sep_a();
        row_open_w(0x10);
        if (func_800F73E0(0x202) != 0)
            goto L174650;
        break;
    }
    return;
}
