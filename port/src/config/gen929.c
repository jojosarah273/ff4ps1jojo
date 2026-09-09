/* FF4 source-port — interpreted module for func_80139CA4.
 * Ground truth: src/func_80139CA4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_800F8F94(u32 v);


void func_80139CA4(void) { row_prep(0x20); func_800F8F94(0x1B4B); func_800F8F94(0x1B4D); func_800F8F94(0x1B4F); func_800F8F94(0x1B51); func_800F8F94(0x1B53); row_prep_close(); }
