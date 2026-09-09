/* FF4 source-port — interpreted module for func_80128264.
 * Ground truth: src/func_80128264.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"






void func_80128264(void) {
    row_prep(0x20);
    row_sync2(0x100);
    cell_pull9_hi(0x1A37);
    cell_pull9_hi(0x16AE);
    row_sync2(0x2);
    cell_pull9_hi(0x16B0);
    cell_pull9_hi(0x1A39);
    row_prep_close();
    latch(0);
    txt_draw(0x1A3B);
    txt_draw(0x16B2);;
}
