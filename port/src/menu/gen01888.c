/* FF4 source-port — interpreted module for func_800F516C.
 * Ground truth: src/func_800F516C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u32 *D_8019ED50;
void row_arm_s(void) { *D_8019ED50 = *D_8019ED44 << 1; *D_8019ED44 = *D_8019ED50; }
