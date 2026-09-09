/* FF4 source-port — interpreted module for func_80128264.
 * Ground truth: src/func_80128264.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_800F9644(u32 v0);
extern void func_800F6558(u32 v0);
extern void func_800F81B0(u32 v0);
extern void func_800F9660(u32 v0);
extern void func_800F654C(u32 v0);
extern void func_800F8188(u32 v0);
void func_80128264(void) {
    row_prep(0x20);
    row_sync2(0x100);
    func_800F81B0(0x1A37);
    func_800F81B0(0x16AE);
    row_sync2(0x2);
    func_800F81B0(0x16B0);
    func_800F81B0(0x1A39);
    row_prep_close();
    latch(0);
    txt_draw(0x1A3B);
    txt_draw(0x16B2);;
}
