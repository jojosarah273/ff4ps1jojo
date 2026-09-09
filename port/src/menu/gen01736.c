/* FF4 source-port — interpreted module for func_800F9708.
 * Ground truth: src/func_800F9708.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED58;
void func_800F9708(void) { *D_8019ED58 = *D_8019ED44; }
