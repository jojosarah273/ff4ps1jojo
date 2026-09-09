/* FF4 source-port — interpreted module for func_800F5CCC.
 * Ground truth: src/func_800F5CCC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
extern u32 *D_8019ED50;
void poll_spin(void) { *D_8019ED40 = *D_8019ED40 - 1; *D_8019ED50 = *D_8019ED40; }
