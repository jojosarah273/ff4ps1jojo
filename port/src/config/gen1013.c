/* FF4 source-port — interpreted module for fn_1x2e758.
 * Ground truth: src/fn_1x2e758.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
void fn_1x2e758(void)
{
    u8 *p = D_8019ED40;
    *p = (u8)(*p << 5);
    cell_put(0x43);
    cell_fmt2(0x43);
    wnd_open(0x20);
    do {
        cell_push_c8_d58(0xFE28);
        cell_pull_c8(0xA160);
        step2();
        cell_set50_from54();
    } while (poll_go(0x202) != 0);
}
