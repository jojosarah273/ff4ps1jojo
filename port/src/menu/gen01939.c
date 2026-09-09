/* FF4 source-port — interpreted module for func_800F40CC.
 * Ground truth: src/func_800F40CC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
void func_800F40CC(u8 *m) { *D_8019ED40 &= *m; }
