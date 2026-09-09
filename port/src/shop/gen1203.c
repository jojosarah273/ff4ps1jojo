/* FF4 source-port — interpreted module for func_8016D2B0.
 * Ground truth: src/func_8016D2B0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016D2B0(void)
{
    /* shop: 3C3C/3B04(0x2000)/9330 + 8016D3E0 row + 95A0. */
    cell_state_of();
    cell_state(0x2000);
    row_open();
    func_8016D3E0();
    row_close();
    return;
}
