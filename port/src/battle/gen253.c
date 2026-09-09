/* FF4 source-port — interpreted module for func_801115F0.
 * Ground truth: src/func_801115F0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801115F0(void)
{
    func_80111B14();
    latch(0x81);
    txt_draw(0x4200);
    open_row(0x79);
    open_row(0x20);
L1628:
    for (;;) {
        /* s0 branch */
        latch(3);
        txt_draw(0x1705);
        func_80111ADC();
        latch(0x10);
        txt_draw(0x340);
        txt_draw(0x300);
        latch(0x20);
        txt_draw(0x344);
        txt_draw(0x304);
        latch(0x30);
        txt_draw(0x348);
        txt_draw(0x308);
        latch(0x40);
        txt_draw(0x34C);
        txt_draw(0x30C);
        latch(0x78);
        sep_b();
        func_800F7F48(cell_state(0x20));
        io_poll(0x68);
        if (io_go() != 0)
            goto L16fc;
        latch(0x68);
    L16fc:
        txt_draw(0x341);
        txt_draw(0x345);
        txt_draw(0x349);
        txt_draw(0x34D);
        latch(0x30);
        txt_draw(0x342);
        latch(0x32);
        txt_draw(0x346);
        latch(0x34);
        txt_draw(0x34A);
        latch(0x36);
        txt_draw(0x34E);
        latch(0x37);
        txt_draw(0x343);
        txt_draw(0x303);
        txt_draw(0x347);
        txt_draw(0x307);
        txt_draw(0x34B);
        txt_draw(0x30B);
        txt_draw(0x34F);
        txt_draw(0x30F);
        latch(0x70);
        txt_draw(0x301);
        txt_draw(0x305);
        txt_draw(0x309);
        txt_draw(0x30D);
        row_page(0x7A);
        row_read(2);
        sep_a();
        row_open_w(0xE4);
        txt_draw(0x302);
        txt_draw(0x306);
        txt_draw(0x30A);
        txt_draw(0x30E);
        txt_draw_cur();
        row_page(0x7A);
        row_read(0xF);
        if (sel(0x202) != 0)
            goto L1894;
        key_page(0x20);
    L1894:
        row_page(0x20);
        io_poll(0x20);
        if (io_just() == 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
}
