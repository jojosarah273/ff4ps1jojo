/* FF4 source-port — interpreted module for func_80139CF4.
 * Ground truth: src/func_80139CF4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80139CF4(void)
{
    /* config row: 0x30/0x31 windows, 0x8D/0x8A/0x1D/0x1F/0x121/0x122
       texts, 801266F0/8016EA7C/80126610/8011EE34/801241B8/8011F6A4/
       8011F864/80139E34/801240A8/801240D0/80126418/80122A24/
       80126480/80126590; linear render. */
    latch(0x30);
    cell_put(0x3F);
    func_801266F0();
    wnd_open_cur();
    tail(0x8D);
    tail(0x8A);
    func_8016EA7C();
    func_80126610();
    latch(0x13);
    func_800F81E8(0x212C);
    wnd_open(0x4040);
    tail(0x1D);
    wnd_open_cur();
    tail(0x1F);
    latch(0x1E);
    txt_draw(0x121);
    wnd_open(0x20);
    label(0x122);
    func_8011EE34();
    func_801241B8();
    func_8011F6A4();
    func_8011F864();
    func_8017F8F8();
    func_80139E34();
    func_80126610();
    latch(0x1F);
    func_800F81E8(0x212C);
    func_801240A8();
    func_801240D0();
    func_80126418();
    func_801241B8();
    func_80122A24();
    func_8011F6A4();
    func_80126480();
    func_80126590();
    return;
}
