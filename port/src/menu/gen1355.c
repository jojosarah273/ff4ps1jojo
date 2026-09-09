/* FF4 source-port — interpreted module for func_800F90C4.
 * Ground truth: src/func_800F90C4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED5C;
extern u8 *func_800F3B04(u32 a0);
void func_800F90C4(u32 a0) { *(u8 *)cell_state(a0 + *D_8019ED5C) = 0; }
