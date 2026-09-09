/* FF4 source-port — interpreted module for func_80110818.
 * Ground truth: src/func_80110818.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED40;
void func_80110818(void)
{
    func_80110F2C();
    latch(1);
    txt_draw(0x6C8);
    do {
        func_80110FA4();
        latch(0x24);
        sep_b();
        func_800F7F48(cell_state(0x24));
        cell_put(0xB9);
        func_80173780();
        func_80110BC8();
        row_page(0x24);
        io_poll(0x24);
        if (io_go() != 0) {
            u8 *p;
            latch(0x68);
            txt_draw(0x300);
            latch(0x78);
            txt_draw(0x304);
            txt_draw(0x301);
            txt_draw(0x305);
            row_page(0x7A);
            p = D_8019ED40;
            *p = (u8)(*p >> 2);
            row_read(2);
            sep_a();
            row_open_w(0xE4);
            txt_draw(0x302);
            p = D_8019ED40;
            *p = (u8)(*p ^ 2);
            txt_draw(0x306);
            latch(0x37);
            txt_draw(0x303);
            txt_draw(0x307);
        }
        row_page(0x7A);
        row_read(7);
        if (sel(0x202) != 0)
            continue;
        key_page(0x24);
        row_page(0x24);
        io_poll(0x48);
        if (io_just() == 0)
            continue;
        break;
    } while (1);
    open_row(0xC8);
    func_8011EA5C();
}
