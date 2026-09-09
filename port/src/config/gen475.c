/* FF4 source-port — interpreted module for func_801330F8.
 * Ground truth: src/func_801330F8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801330F8(void)
{
    /* ability banner: 0x1B window, 0x2100/0x15/0x145 texts, 80139AFC
       tail; loops L133170 (6D70/5C64 pairs) and L1331EC. */
    row_open2();
    row_open3();
    latch(0x1B);
    func_800F9200();
    row_pad();
    wnd_open(0x2100);
    row_open();
    func_800F94B8();
    latch(0x80);
    cell_put(0x15);
    latch(0x10);
    txt_draw(0x145);
L133168:
    for (;;) {
        wnd_open(8);
    L133170:
        for (;;) {
            func_800F6D70();
            func_800F6D70(1);
            func_800F5E48();
            if (poll_go(0x202) != 0)
                continue;
            break;
        }
        wnd_open(8);
    L1331EC:
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
    func_80139AFC();
    func_800F94B8();
    row_pad();
    return;
}
