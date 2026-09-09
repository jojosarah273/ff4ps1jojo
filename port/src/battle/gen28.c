/* FF4 source-port — interpreted module for func_80102770.
 * Ground truth: src/func_80102770.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80102770(void)
{
    cell_state(0xAB);
    row_page_cur();
    if (gate(0x202) == 0)
        goto L2c18;
    row_page(0xC1);
    if (gate(2) != 0)
        goto L27e0;
    row_page(0x7B);
    row_read(8);
    if (sel(0x202) != 0)
        goto L27e0;
    key_page(0xC4);
L27e0:
L2804:
L2840:
    key_page(0x7B);
    row_page(0xAC);
    func_800F9690();
    row_page(0xAB);
    io_poll(1);
    if (io_just() == 0)
        goto L2948;
    row_page(0x5C);
    cell_put(6);
    sep_b();
    cell_pos_back();
    cell_put(0x5C);
    row_page(0x5D);
    cell_pos_back();
    row_read(7);
    cell_put(0x5D);
    row_page(6);
    row_read(0xF);
    sep_b();
    cell_pos_back();
    if (io_go() != 0)
        goto L2c18;
    txt_set(0x6FA);
    func_800F9690();
    txt_set(0x1707);
    poll_spin();
    goto L2ad4;
L2948:
    io_poll(2);
    if (io_just() == 0)
        goto L2a20;
    row_page(0x5A);
    sep_a();
    row_open_w0();
    cell_put(0x5A);
    row_page(0x5B);
    row_open_w0();
    row_read(7);
    cell_put(0x5B);
    row_page(0x5A);
    row_read(0xF);
    if (sel(0x202) != 0)
        goto L2c18;
    txt_set(0x6FA);
    func_800F9690();
    txt_set(0x1706);
    cell_set50_from40();
    goto L2af4;
L2a20:
    io_poll(3);
    if (io_just() == 0)
        goto L2b08;
    row_page(0x5C);
    sep_a();
    row_open_w0();
    cell_put(0x5C);
    row_page(0x5D);
    row_open_w0();
    row_read(7);
    cell_put(0x5D);
    row_page(0x5C);
    row_read(0xF);
    if (sel(0x202) != 0)
        goto L2c18;
    txt_set(0x6FA);
    func_800F9690();
    txt_set(0x1707);
    cell_set50_from40();
L2ad4:
    txt_draw(0x1707);
L2af4:
    txt_draw_cur();
    goto L2c18;
L2b08:
    io_poll(4);
    if (io_just() == 0)
        goto L2c18;
    row_page(0x5A);
    cell_put(6);
    sep_b();
    cell_pos_back();
    cell_put(0x5A);
    row_page(0x5B);
    cell_pos_back();
    row_read(7);
    cell_put(0x5B);
    row_page(6);
    row_read(0xF);
    sep_b();
    cell_pos_back();
    if (io_go() != 0)
        goto L2c18;
    txt_set(0x6FA);
    func_800F9690();
    txt_set(0x1706);
    poll_spin();
    txt_draw(0x1706);
L2c18:
    func_801026EC();
    return;
}
