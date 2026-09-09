/* FF4 source-port — interpreted module for func_800F6558.
 * Ground truth: src/func_800F6558.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
void row_sync2(u16 v) { *D_8019ED44 = v; }
