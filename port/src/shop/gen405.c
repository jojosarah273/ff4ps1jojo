/* FF4 source-port — interpreted module for func_80161900.
 * Ground truth: src/func_80161900.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern void func_800F8F74(u32 v0);
extern void func_800F71DC(u32 v0);
extern void func_800F8D00(u32 v0);
extern void func_800F6240(u32 v0);
extern void func_800F654C(u32 v0);
extern void func_800F8188(u32 v0);
extern void func_800F824C(u32 v0);
extern void func_800F6630(u32 v0);
extern void func_8015A374(void);
extern void func_80153374(void);
extern void func_800F8768(u32 v0);
extern void func_800F7270(u32 v0);
extern void func_8015329C(void);
void func_80161900(void) {
    func_800F8F74(0x357C);
    wnd_open(0xA);
    label(0x357D);
    page_paint2(0x390A);
    latch(0x19);
    txt_draw(0x34C8);
    latch(0x10);
    txt_draw(0x34C7);
    latch(0x22);
    txt_draw(0x397B);
    latch(0xC);
    cell_put(0xD6);
    row_page(0xCD);
    func_8015A374();
    latch(0x3);
    func_80153374();
    latch(0x8);
    cell_draw(0x2A06);
    page(0xA6);
    latch(0x22);
    cell_draw(0x2051);
    func_8015329C();
    latch(0x36);
    txt_draw(0x34CA);;
}
