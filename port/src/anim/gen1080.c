/* FF4 source-port — interpreted module for func_80176F88.
 * Ground truth: src/func_80176F88.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80176F88(void)
{
    /* battle anim: 3C3C(0x300)/3B04/3B9Cx2 gates; 9330 row then
       95A0 close. */
    cell_state_of();
    cell_state(0x300);
    cell_peek_cur();
    cell_peek_cur();
    row_open();
    row_close();
    return;
}
