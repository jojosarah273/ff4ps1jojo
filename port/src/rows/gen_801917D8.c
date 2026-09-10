/* FF4 source-port — interpreted module for fn_1x917d8.
 * Ground truth: src/fn_1x917d8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019B9F4[8];
void fn_1x917d8(u32 x) { u32 old = D_8019B9F4[0]; D_8019B9F4[0] = x; return old; }
