/* FF4 source-port — interpreted module for func_8010F2F4.
 * Ground truth: src/func_8010F2F4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u8 *D_8019ED68;
extern u8 *D_8019ED50;
void func_8010F2F4(void)
{
    cell_clear_bank(0x1704);
    open_row(0x20);
    open_row(0x24);
    func_8010F484();
    do {
        wnd_fx_7d();
        cell_clear_pad();
        func_8011416C();
        key_page(0x20);
        row_page(0x24);
        sep_a();
        cell_poke0(cell_state(0x20));
        cell_put(0x24);
        *D_8019ED68 &= 0xFD;
        if (*D_8019ED50 == 0)
            *D_8019ED68 |= 0x2;
        if (io_go() != 0) {
            wnd_open(0);
            latch(0x60);
            cell_put(0xC);
            latch(0x50);
            cell_put(0xE);
            func_801105A4();
        }
        row_page(0x20);
        io_poll(0xFF);
    } while (io_just() == 0);
    func_8011053C();
    txt_set(0x1288);
    row_read(0xFB);
    txt_draw(0x1288);
    wnd_open(3);
    do {
        row_open();
        func_8010F68C();
        func_8010F4DC();
        func_80118938();
        row_close();
        cell_set50_from54();
    } while (poll_go(0x202) != 0);
    func_8011EA5C();
}
