/* FF4 source-port — interpreted module for func_800F4264.
 * Ground truth: src/func_800F4264.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
void func_800F4264(u16 m) { *D_8019ED44 &= m; }
