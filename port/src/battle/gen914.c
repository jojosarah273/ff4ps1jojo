/* FF4 source-port — interpreted module for func_80100894.
 * Ground truth: src/func_80100894.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80100894(void)
{
    /* rows: 4x 65F0 cells + 0x700-0x706 texts via 81B0; linear. */
    row_prep(0x20);
    func_800F65F0();
    func_800F65F0();
    func_800F65F0();
    func_800F65F0();
    func_800F81B0(0x700);
    func_800F81B0(0x702);
    func_800F81B0(0x704);
    func_800F81B0(0x706);
    row_sync2_cur();
    row_prep_close();
    return;
}
