/* FF4 source-port — interpreted module for func_8012E1C0.
 * Ground truth: src/func_8012E1C0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012E1C0(void)
{
    /* rows: 5140 + 801224D0 + 9644(0x20)/9660(0x20) windows. */
    row_sel_cell_cur();
    battle_put43();
    row_prep(0x20);
    row_prep_close();
    return;
}
