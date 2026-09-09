/* FF4 source-port — interpreted module for func_800FDBBC.
 * Ground truth: src/func_800FDBBC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FDBBC(void)
{
    /* shop title-screen: 0x7C window with 800FDA9C/8018226C rows and
       the 0x2115/0x2116/0x420B/0x4300-0x4305 register rows (801820F4
       commit); 0x2000 gate. */
    latch(0x80);
    txt_draw(0x2115);
    row_page(0x7C);
    func_800F7864();
    row_read(0xF);
    func_800F9690();
    func_800F9690();
    func_800FDA9C();
    row_page(0x7C);
    func_800F7864();
    row_read(0xF);
    func_800F9690();
    sep_a();
    row_open_w(0x40);
    func_800F9690();
    func_800FDA9C();
    func_8018226C(0x2000);
    latch(0x80);
    txt_draw(0x2115);
    wnd_open(0x1E80);
    label(0x2116);
    func_800F8F74(0x420B);
    func_800F8F74(0x4300);
    latch(0x19);
    txt_draw(0x4301);
    wnd_open(0x5900);
    label(0x4302);
    latch(0x7F);
    txt_draw(0x4304);
    wnd_open(0x100);
    label(0x4305);
    func_800FCCBC();
    func_801820F4();
    return;
}
