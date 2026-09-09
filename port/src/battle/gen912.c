/* FF4 source-port — interpreted module for func_80105358.
 * Ground truth: src/func_80105358.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80105358(void)
{
    /* rows (twin of 80100894): 4x 65F0 + 85B0 texts; linear. */
    row_prep(0x20);
    func_800F65F0();
    func_800F65F0();
    func_800F65F0();
    func_800F65F0();
    cell_pull9_hi(0x700);
    cell_pull9_hi(0x702);
    cell_pull9_hi(0x704);
    cell_pull9_hi(0x706);
    row_sync2_cur();
    row_prep_close();
    return;
}
