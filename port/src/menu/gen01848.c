/* FF4 source-port — interpreted module for func_800F5ECC.
 * Ground truth: src/func_800F5ECC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
void func_800F5ECC(u8 *m) { *D_8019ED40 ^= *m; }
