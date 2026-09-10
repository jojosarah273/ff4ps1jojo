/* FF4 source-port — interpreted module for fn_1x1d658.
 * Ground truth: src/fn_1x1d658.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x1d658(void)
{
    row_prep(0x20);
    cell_push9(0x1707);
    cell_pos_mask(0xFF);
    sep_b();
    cell_pos_back2(7);
    cell_put_hi9(0x5C);
    cell_push9(0x1706);
    cell_pos_mask(0xFF);
    sep_b();
    cell_pos_back2(7);
    cell_put_hi9(0x5A);
    row_sync2_cur();
    row_prep_close();
    fn_1x1e9ec();
    shop_buy_row_x711_gate_x3d_x18_x19();
    latch(0x10);
    cell_put(7);
    txt_set(0x1707);
    sep_b();
    cell_pos_back(7);
    cell_put(8);
LD738:
    for (;;) {
        row_page(8);
        row_read(0x3F);
        cell_put(0x3E);
        txt_set(0x1706);
        sep_b();
        cell_pos_back(7);
        cell_put(0x3D);
        page(0x3D);
        tail(0x43);
        shop_rows_x3d_x18_x19_windows_cell();
        fn_1x1ce18();
        latch(0x80);
        txt_draw(0x2115);
        wnd_fx_tags();
        latch(1);
        txt_draw(0x4300);
        page(0x99);
        label(0x2116);
        wnd_open(0xADB);
        label(0x4302);
        page(0x95);
        label(0x4305);
        catalog_dispatch_0();
        page(0x9B);
        label(0x2116);
        cell_clear_bank(0x420B);
        page(0x97);
        if (cell_flags_pack(2) != 0)
            goto LD830;
        label(0x4305);
        catalog_dispatch_0();
    LD830:
        page(0x9D);
        label(0x2116);
        cell_clear_bank(0x420B);
        wnd_open(0xB1B);
        label(0x4302);
        page(0x95);
        label(0x4305);
        catalog_dispatch_0();
        page(0x9F);
        label(0x2116);
        cell_clear_bank(0x420B);
        page(0x97);
        if (cell_flags_pack(2) != 0)
            goto LD8b0;
        label(0x4305);
        catalog_dispatch_0();
    LD8b0:
        key_page(8);
        poll_pair(7);
        if (poll_go(2) == 0)
            continue;
        break;
    }
    return;
}
