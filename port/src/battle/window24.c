/* FF4 source-port — interpreted module for battle_window_24.
 * Ground truth: src/battle_window_24.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_window_24(void)
{
    func_800FE8B4();
    fn_1x162f8();
    wnd_open_cur();
    tail(0x24);
L15d54:
    for (;;) {
        page(0x24);
        row_page(0x7A);
        row_read(7);
        if (ticker_reblend(0x202) != 0)
            goto L15D9C;
        catalog_base();
        cell_dispatch_cur();
    L15D9C:
        txt_cell(0xA6D);
        if (gate_cur() == 0)
            goto L16010;
        if (io_just() != 0)
            goto L15DDC;
        io_poll(4);
        if (io_just() == 0)
            goto L15FF0;
    L15DDC:
        row_page(0x7A);
        row_read(7);
        if (ticker_reblend(0x202) != 0)
            goto L15FF0;
        row_page(0xE5);
        if (gate(0x202) != 0)
            goto L16000;
        page_paint(0xA6D);
        row_page(0xC7);
        if (gate(0x202) != 0)
            goto L15F2C;
        txt_set(0xAD0);
        battle_row_linear();
        sep_a();
        ticker_advance(catalog_base(0xAD4));
        page(0x24);
        cell_draw(0xA6E);
        txt_set(0xAD1);
        battle_row_linear();
        sep_a();
        ticker_advance(catalog_base(0xAD5));
        page(0x24);
        cell_draw(0xA6F);
        goto L15FF0;
    L15F2C:
        row_page(0xC7);
        poll_spin();
        row_read(0xF);
        row_sel_cell_cur();
        sep_a();
        ticker_advance(catalog_base(0xAD4));
        cell_draw(0xA6E);
        sep_a();
        ticker_advance(catalog_base(0xAD5));
        cell_draw(0xA6F);
        key_page(0xC7);
    L15FF0:
        battle_party_status_rows_xa6d_xa6f();
        goto L16010;
    L16000:
        latch(0xFF);
        cell_draw(0xA6D);
    L16010:
        row_page(0x24);
        sep_a();
        row_open_w(4);
        cell_put(0x24);
        if (io_press(catalog_base(0xACF)) == 0)
            continue;
        break;
    }
    row_page(0x7A);
    row_read(7);
    if (ticker_reblend(0x202) != 0)
        return;
    page_open(0xAD2);
    cell_set50_from54();
    label(0xAD2);
    return;
}
