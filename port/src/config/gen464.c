/* FF4 source-port — interpreted module for func_80129F54.
 * Ground truth: src/func_80129F54.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80129F54(void)
{
    /* main-menu option 0 (config tab): 0x210C header + 0x1F/0x1C/0x1B/
       0xAE windows, 0x1BA5/0x1BC9/0x1B1D rows; home-row renders through
       80121124/801210AC/80126920/801263F0/80120F1C, then the 8012AAC0/
       80120F94/80120CA4 option cells and 8012A190 sub-menu gate. */
    cell_clear_bank(0x1B1F);
    func_801267A0();
    func_801266F0();
    func_801240A8();
    func_80120F1C();
    latch(0x1C);
    cell_put(0xC2);
    latch(6);
    cell_put(0xAE);
    func_801241B8();
    func_8011F684();
    latch(0x1B);
    cell_pull_c8_lo(0x212C);
    draw_pad_cur();
    wnd_open_cur();
    func_80121124();
    func_801210AC();
    draw_pad_cur();
    func_8011FB74();
    latch(3);
    func_80126920();
    func_801263F0();
    func_8011EF0C();
    page_open(0x1BA5);
    tail(0x93);
    func_8016EA7C();
    page_paint2(0x1BC9);
    wnd_open_cur();
    label(0x1B1D);
    func_80120F94();
    func_8012AAC0();
    func_8016EA7C();
    func_80120B6C();
    func_8012A190();
    /* v0/v1 gate -> L12A180 */
    func_801241B8();
    func_8011F684();
    page(0x93);
    label(0x1BA5);
    func_80120F94();
    func_80120CA4();
    func_801240A8();
    func_80126830();
    func_801263F0();
    func_8011EF0C();
    func_80120F1C();
    latch(0x1C);
    cell_put(0xC2);
    latch(0x86);
    cell_put(0xAE);
    draw_pad_cur();
    wnd_open_cur();
    func_80121124();
    func_80122A9C();
    func_80122A24();
    func_8011F684();
    latch(0x1F);
    cell_pull_c8_lo(0x212C);
    cell_clear_bank(0x1BC9);
    battle_mode_dispatch();
    func_80120B6C();
    return;
}
