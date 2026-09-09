/* FF4 source-port — interpreted module for func_80124024.
 * Ground truth: src/func_80124024.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80124024(void)
{
    /* battle rows: 3C3C(0x73)/3A70/3B04. */
    cell_state_of();
    cell_bank_sel(0x73);
    cell_state_of();
    return;
}
