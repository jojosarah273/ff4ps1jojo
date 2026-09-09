/* FF4 source-port — interpreted module for func_80100894.
 * Ground truth: src/func_80100894.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80100894(void)
{
    /* rows: 4x 65F0 cells + 0x700-0x706 texts via 81B0; linear. */
    row_prep(0x20);
    cell_sink89_c();
    cell_sink89_c();
    cell_sink89_c();
    cell_sink89_c();
    cell_pull9_hi(0x700);
    cell_pull9_hi(0x702);
    cell_pull9_hi(0x704);
    cell_pull9_hi(0x706);
    row_sync2_cur();
    row_prep_close();
    return;
}
