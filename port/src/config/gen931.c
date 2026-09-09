/* FF4 source-port — interpreted module for func_801376B0.
 * Ground truth: src/func_801376B0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_800F3D64(u32 v);
extern void func_800F6558(u32 v);
extern void func_800F71DC(u32 v);
extern void func_800F9644(u32 v);
extern void func_800F9660(u32 v);
void func_801376B0(void) { row_prep(0x20); row_sync2(0xF); wnd_open(0x300); func_800F3D64(0x7E7E); row_prep_close(); }
