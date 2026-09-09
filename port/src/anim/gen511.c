/* FF4 source-port — interpreted module for func_80170884.
 * Ground truth: src/func_80170884.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_800F8F74(u32 v0);
extern void func_800F654C(u32 v0);
extern void func_800F8188(u32 v0);
extern void func_800F71DC(u32 v0);
extern void func_800F8D00(u32 v0);
extern void func_800F8FB8(u32 v0);
extern void func_800F9868(u32 v0);
void func_80170884(void) {
    func_800F8F74(0x420B);
    latch(0x80);
    txt_draw(0x2115);
    latch(0x8);
    txt_draw(0x4300);
    latch(0x19);
    txt_draw(0x4301);
    wnd_open(0);
    label(0x2116);
    open_row(0x6);
    wnd_open(0x606);
    label(0x4302);
    func_800F8F74(0x4304);
    wnd_open(0x1800);
    label(0x4305);
    func_800F9868(0);;
}
