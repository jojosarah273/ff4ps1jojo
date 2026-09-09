/* FF4 source-port — interpreted module for func_801527AC.
 * Ground truth: src/func_801527AC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED68;
void func_801527AC(void)
{
    if (*D_8019ED68 & 0x20) {
        row_sel_cell_cur();
        row_sel_cell2_cur();
    } else {
        row_arm_s_cur();
        row_arm_s2_cur();
    }
}
