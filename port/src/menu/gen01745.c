/* FF4 source-port — interpreted module for func_800F9644.
 * Ground truth: src/func_800F9644.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED68;
void row_prep(u8 m) { *D_8019ED68 &= ~m; }
