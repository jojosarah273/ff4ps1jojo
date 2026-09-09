/* FF4 source-port — interpreted module for func_80141BD4.
 * Ground truth: src/func_80141BD4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80141BD4(void)
{
    /* battle: 3C3C/3B04/3B9C gate; 80141C98 rows with 0x40/0x80
       variants; linear. */
    cell_state_of();
    cell_state_of();
    cell_peek_cur();
L141c2c:
    for (;;) {
        draw_pad_cur();
        func_80141C98();
        draw_pad(0x40);
        func_80141C98();
        draw_pad(0x80);
        func_80141C98();
        return;
    }
}
