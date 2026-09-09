/* FF4 source-port — interpreted module for func_8011A690.
 * Ground truth: src/func_8011A690.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011A690(void)
{
    txt_cell(0x9D6);
    io_poll(0xFB);
    if (io_go() != 0)
        goto La7a8;
    func_80101230();
    cell_clear_bank(0x1704);
    txt_cell(0x9D6);
    txt_draw(0x1702);
    txt_cell(0x9D7);
    row_read(0x3F);
    txt_draw(0x1706);
    txt_cell(0x9D7);
    row_read(0xC0);
    txt_draw(0x1705);
    txt_cell(0x9D8);
    txt_draw(0x1707);
    txt_cell(0x9D9);
    row_read(0x20);
    if (sel(2) == 0) {
        latch(1);
        cell_put(0xCA);
    }
    txt_cell(0x9D9);
    if (gate(0x80) != 0)
        goto La788;
    latch_cur();
    goto La790;
La788:
    latch(1);
La790:
    txt_draw(0x1701);
    latch(3);
    goto La888;
La7a8:
    sep_b();
    cell_pos_back(0xFB);
    cell_cursor_dec();
    txt_cell(0x9D7);
    txt_draw(0x1706);
    txt_cell(0x9D8);
    txt_draw(0x1707);
    txt_cell(0x9D9);
    row_read(0x40);
    cell_put(0xE1);
    txt_cell(0x9D9);
    row_read(0x20);
    if (sel(2) == 0) {
        latch(1);
        cell_put(0xCA);
    }
    txt_cell(0x9D9);
    row_read(0x1F);
    poll_spin();
    if (poll_go(0x202) == 0) {
        txt_set(0x172F);
        txt_draw(0x1706);
        txt_set(0x1730);
        txt_draw(0x1707);
    }
    wnd_open_cur();
    label(0x172C);
    row_close2();
La888:
    func_8011AB18();
    txt_set(0x1700);
    io_poll(3);
    if (io_just() != 0)
        goto Laaa0;
    page(0xB3);
    txt_cell(0x9D9);
    row_read(0x1F);
    if (sel(0x202) != 0)
        goto La8f8;
    cell_clear_bank(0x1704);
    open_row(0xAC);
    open_row(0x7B);
    goto Laaa0;
La8f8:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto La930;
    latch(1);
    txt_draw(0x170F);
    func_80102F38();
    goto Laaa0;
La930:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto La970;
    latch(1);
    txt_draw(0x1712);
    cell_clear_bank(0x1715);
    func_80102F70();
    goto Laaa0;
La970:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto La9a8;
    latch(1);
    txt_draw(0x1718);
    func_80103030();
    goto Laaa0;
La9a8:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto La9e0;
    latch(1);
    txt_draw(0x171C);
    func_801031F0();
    goto Laaa0;
La9e0:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto Laa18;
    latch(1);
    txt_draw(0x1720);
    func_801033E0();
    goto Laaa0;
Laa18:
    poll_spin();
    if (poll_go(0x202) != 0)
        goto Laa50;
    latch(1);
    txt_draw(0x1724);
    func_801035B0();
    goto Laaa0;
Laa50:
    latch(1);
    txt_draw(0x1728);
    page(0xB3);
    txt_cell(0x9D9);
    row_read(0x18);
    txt_draw(0x1705);
    func_80102FF8();
Laaa0:
    open_row(0x79);
    open_row(0x7A);
    open_row(0x7B);
    latch(0x81);
    txt_draw(0x4200);
    shop_view_run();
    func_800F5448();
    page(0xB3);
    tail(0xB3);
    func_8011EA5C();
    return;
}
