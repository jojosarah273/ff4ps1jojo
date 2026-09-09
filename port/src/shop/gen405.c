/* FF4 source-port — interpreted module for func_80161900.
 * Ground truth: src/func_80161900.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"








extern void func_8015A374(void);
extern void func_80153374(void);


extern void func_8015329C(void);
void func_80161900(void) {
    cell_clear_bank(0x357C);
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
