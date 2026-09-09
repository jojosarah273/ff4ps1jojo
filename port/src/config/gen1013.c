/* FF4 source-port — interpreted module for func_8012E758.
 * Ground truth: src/func_8012E758.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
void func_8012E758(void)
{
    u8 *p = D_8019ED40;
    *p = (u8)(*p << 5);
    cell_put(0x43);
    cell_fmt2(0x43);
    wnd_open(0x20);
    do {
        func_800F6D70(0xFE28);
        func_800F8960(0xA160);
        step2();
        func_800F5E48();
    } while (poll_go(0x202) != 0);
}
