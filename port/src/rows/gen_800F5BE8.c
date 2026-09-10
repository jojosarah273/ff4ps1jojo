/* FF4 source-port — interpreted module for cell_0xf5be8.
 * Ground truth: src/cell_0xf5be8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 *D_8019ED50;
void cell_0xf5be8(u8 *p) { s32 v = (p[0] | (p[1] << 8)) - 1; p[0] = v; p[1] = (u8)(v >> 8); *D_8019ED50 = v; }
