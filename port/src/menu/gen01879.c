/* FF4 source-port — interpreted module for func_800F5410.
 * Ground truth: src/func_800F5410.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED68;
void sep_a(void) { *D_8019ED68 &= 0xFE; }
