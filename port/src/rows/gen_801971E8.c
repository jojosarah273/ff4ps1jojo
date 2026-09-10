/* FF4 source-port — interpreted module for fn_1x971e8.
 * Ground truth: src/fn_1x971e8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x971e8(u32 a0, u32 a1) { return (u16)((a1 << 6) | ((a0 >> 4) & 0x3F)); }
