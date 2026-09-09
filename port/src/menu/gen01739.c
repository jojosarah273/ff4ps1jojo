/* FF4 source-port — interpreted module for func_800F96CC.
 * Ground truth: src/func_800F96CC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
extern u8 *D_8019ED60;
void func_800F96CC(void) { *D_8019ED60 = *D_8019ED40; }
