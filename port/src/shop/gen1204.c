/* FF4 source-port — interpreted module for func_8016D160.
 * Ground truth: src/func_8016D160.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016D160(void)
{
    /* shop: 3C3C/9330/9644(0x20) rows; 95A0 close. */
    cell_state_of();
    row_open();
    row_prep(0x20);
    row_close();
    return;
}
