/* FF4 source-port — interpreted module for func_8011BD88.
 * Ground truth: src/func_8011BD88.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011BD88(void)
{
    row_page(0xC9);
    if (gate(0x202) != 0)
        return;
    txt_set(0x1700);
    io_poll(3);
    if (io_just() == 0)
        return;
    txt_set(0xFE4);
    row_read(0xC0);
    if (sel(0x202) == 0)
        return;
    txt_set(0xFE4);
    row_read(6);
    if (sel(0x202) != 0)
        goto Lbfe0;
    txt_set(0xFE4);
    row_read(0xC0);
    row_page(0x7A);
    if (sel(0x202) != 0)
        goto Lbf70;
    txt_set(0xFE4);
    row_read(0x30);
    row_prep(0x20);
    row_read2(0x66);
    sep_a();
    func_800F4064();
    func_800F8274(0x66);
    row_read2(0x68);
    sep_a();
    func_800F4064();
    func_800F8274(0x68);
Lbf70:
    row_prep(0x20);
    row_read2(0x5A);
    sep_a();
    cell_peek0(cell_state(0x66));
    func_800F8274(0x5E);
    row_read2(0x5C);
    sep_a();
    cell_peek0(cell_state(0x68));
    func_800F8274(0x60);
    row_sync2_cur();
    row_prep_close();
    return;
Lbfe0:
    txt_set(0xFE4);
    row_read(4);
    if (sel(2) != 0)
        goto Lc0e8;
    page(0x5A);
    tail(0x5E);
    txt_set(0xFE4);
    row_read(0xC0);
    io_poll(0x80);
    if (io_just() != 0)
        goto Lc0a8;
    io_poll(0x40);
    if (io_just() != 0)
        goto Lc080;
    row_arm2(cell_state(0x5E));
    row_sel_cell2_cur();
    row_sel2(cell_state(0x5F));
    goto Lc0a8;
Lc080:
    func_800F76BC(cell_state(0x5F));
    func_800F76E8();
    func_800F7CC8(cell_state(0x5E));
Lc0a8:
    txt_set(0xFE4);
    row_read(6);
    io_poll(4);
    if (io_just() == 0)
        goto Lc0e8;
    wnd_open_cur();
    tail(0x60);
    return;
Lc0e8:
    txt_set(0xFE4);
    row_read(2);
    if (sel(2) != 0)
        return;
    page(0x5C);
    tail(0x60);
    txt_set(0xFE4);
    row_read(0xC0);
    io_poll(0x80);
    if (io_just() != 0)
        goto Lc1b0;
    io_poll(0x40);
    if (io_just() != 0)
        goto Lc188;
    row_arm2(cell_state(0x60));
    row_sel_cell2_cur();
    row_sel2(cell_state(0x61));
    goto Lc1b0;
Lc188:
    func_800F76BC(cell_state(0x61));
    func_800F76E8();
    func_800F7CC8(cell_state(0x60));
Lc1b0:
    txt_set(0xFE4);
    row_read(6);
    io_poll(2);
    if (io_just() == 0)
        return;
    wnd_open_cur();
    tail(0x5E);
    return;
}
