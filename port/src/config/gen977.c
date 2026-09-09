/* FF4 source-port — interpreted module for func_80125528.
 * Ground truth: src/func_80125528.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80125528(void)
{
    /* rows: 0x1D/0x29 windows, 801255E8 close; 4064(0x340) reads. */
    sep();
    stat_sync();
    row_page(0x1D);
    row_prep(0x20);
    row_arm_s_cur();
    row_arm_s2_cur();
    cell_pos_fwd(0x340);
    row_prep_close();
    func_801255E8();
    row_close();
    return;
}
