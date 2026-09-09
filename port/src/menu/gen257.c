/* FF4 source-port — interpreted module for func_800FAD48.
 * Ground truth: src/func_800FAD48.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FAD48(void)
{
    func_800FA460();
    latch(0x17);
    txt_draw(0x212C);
    latch(9);
    txt_draw(0x2105);
    func_80174710();
    wnd_open(0x2000);
    tail(0x47);
    wnd_open(0x1000);
    tail(0x45);
    latch(0xA);
    cell_put(0x3C);
    wnd_open(0xF000);
    tail(0x3D);
    func_801766B0();
    wnd_open(0x2800);
    tail(0x47);
    wnd_open(0x1000);
    tail(0x45);
    open_row(0x76);
    func_80176748();
    func_801706C0();
    txt_set(0xFDF);
    row_read(0x7F);
    func_8011C27C();
    func_801745F4();
    func_801757A4();
    row_page(0x85);
    if (gate(0x202) != 0)
        goto LAE68;
    row_page(0xB1);
    if (gate(0x202) != 0)
        goto LAE68;
    func_8010A2AC();
LAE68:
    open_row(0xD1);
    open_row(0x85);
    row_page(0xB1);
    if (gate(0x202) != 0)
        goto LAE98;
    func_800FD718();
LAE98:
    row_page(0x81);
    if (gate(0x202) != 0)
        goto LAF20;
    latch(0x11);
    txt_draw(0x212D);
    txt_set(0xFE4);
    func_800F7864();
    if (func_800F7728(0x101) != 0)
        goto LAF08;
    latch(2);
    txt_draw(0x2130);
    latch(0x43);
    txt_draw(0x2131);
    goto LAF6C;
LAF08:
    func_800F8F74(0x2130);
    func_800F8F74(0x2131);
    goto LAF6C;
LAF20:
    func_800F8F74(0x212D);
    latch(0x83);
    txt_draw(0x2131);
    row_page(0x83);
    row_read(0xE0);
    func_800F78C4(cell_state(0x81));
    func_8017EA90();
LAF6C:
    func_8011D8E0();
    func_8011D658();
    func_801767D8();
    func_800FC8E8();
    func_801769B4();
    func_8017F9A8();
    func_8017F9A8();
    func_8017F8F8();
    func_800FFB1C();
    func_8011BD88();
    for (;;) {
        func_80194700();
        if (func_80194394() == 0)
            break;
    }
    return;
}
