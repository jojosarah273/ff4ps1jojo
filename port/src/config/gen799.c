/* FF4 source-port — interpreted module for func_80125DF8.
 * Ground truth: src/func_80125DF8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80125DF8(void)
{
    /* rows: 0x145 text; loops L125E28 (6D70/5C64) and L125EAC
       (63BC/5C64) with the 5D24(0x145)/5B8C latch. */
    txt_draw(0x145);
L125e20:
    for (;;) {
        wnd_open(8);
    L125e28:
        for (;;) {
            func_800F6D70();
            func_800F6D70();
            func_800F5E48();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        wnd_open(8);
    L125eac:
        for (;;) {
            func_800F6D70();
            step2();
            func_800F5E48();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        func_800F5D24(0x145);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    return;
}
