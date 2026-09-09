/* FF4 source-port — interpreted module for func_80136174.
 * Ground truth: src/func_80136174.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_800F62F0(u32 v);


void func_80136174(void) { row_prep(0x20); func_800F62F0(0x51); row_prep_close(); }
