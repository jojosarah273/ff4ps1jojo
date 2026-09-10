/* FF4 source-port — interpreted module for fn_1x06d6c.
 * Ground truth: src/fn_1x06d6c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern u32 D_8019ED40[8];
extern u32 D_8019EE60[8];
void fn_1x06d6c(void)
{
    func_800F92D8();
    row_prep(0x20);
    cell_cursor_ret2();
    row_open();
    row_sync();
    row_open2();
    row_open3();
    row_sync2_cur();
    row_prep_close();
    wnd_open(0x600);
    row_open();
    cell_cursor_read();
    latch_cur();
    cell_cursor_dec();
    row_pad();
    open_row(0x7F);
    row_page(0xC4);
    if (gate(2) != 0)
        goto Le24;
    event_v0_spin_loop_l119cec_f5c0_ta();
    open_row(0xC4);
    goto Le2c;
Le24:
    func_8017668C();
Le2c:
    fn_1x743e0();
    row_page(0x7E);
    if (gate(2) != 0)
        goto Le5c;
    open_row(0x7E);
    goto L03c;
Le5c:
    row_page(0xD9);
    if (gate(2) != 0)
        goto Le84;
    func_800FEB10();
    goto L03c;
Le84:
    txt_set(0x1700);
    io_poll(3);
    if (io_just() != 0)
        goto Lf4c;
    func_800FDB5C();
    row_page(0x7A);
    cell_tick_half();
    if (cell_flags_nz50(0x101) == 0)
        goto Lf14;
    row_page(0x94);
    if (gate(2) != 0)
        goto Lef4;
    open_row(0x94);
    fn_1x1dbf0();
Lef4:
    fn_1x74f64();
    shop_rows_x1700_x1288_texts_x7a_xc();
    shop_rows_x1700_text_x7a_window_xc();
    goto L03c;
Lf14:
    row_page(0x94);
    if (gate(2) != 0)
        goto Lf3c;
    open_row(0x94);
    fn_1x1dbf0();
Lf3c:
    row_picker_xcc_window_x1003_gate_e();
    goto L03c;
Lf4c:
    row_page(0x94);
    if (gate(2) != 0)
        goto Lf74;
    open_row(0x94);
    shop_sale_rows_xab_x99_x95_x9b_x9d();
Lf74:
    shop_rows_xd4_window_x2115_x6fe_x7();
    shop_buy_list_xe2_window_gate_x211();
    shop_banner_xe9_window_x2115_gate();
    fn_1x0a204();
    fn_1x09a28();
    fn_1x098c8();
    row_page(0xDF);
    if (gate(2) != 0)
        goto Lfc4;
    fn_1x096f0();
Lfc4:
    row_page(0xDA);
    if (gate(2) != 0)
        goto Lfe4;
    fn_1x06960();
Lfe4:
    row_page(0x7A);
    cell_tick_half();
    if (cell_flags_nz50(0x101) != 0)
        goto L024;
    fn_1x09b08();
    fn_1x07530();
    fn_1x750dc();
    goto L03c;
L024:
    row_picker_xcc_window_x1003_gate_e();
    func_800FCA08();
    shop_sell_flow_x1700_header_x7a_x1();
L03c:
    row_page(0xCA);
    io_poll(2);
    if (io_just() == 0)
        goto L094;
    key_page(0x80);
    row_page(0x80);
    txt_draw(0x2100);
    io_poll(0xF);
    if (io_just() == 0)
        goto L094;
    open_row(0xCA);
L094:
    fn_1x1bd88();
    row_page(0xC2);
    if (gate(2) != 0)
        goto L140;
    row_page(0xD9);
    if (gate(0x202) != 0)
        goto L140;
    row_page(0xB1);
    if (gate(0x202) != 0)
        goto L140;
    txt_set(0x1704);
    if (gate(0x202) != 0)
        goto L140;
    row_page(0x7B);
    row_read(0xC);
    cell_put(0x77);
L140:
    row_page(0x77);
    txt_draw(0x2106);
    open_row(0x10);
    row_page(0xE3);
    if (gate(2) != 0)
        goto L1a0;
    latch(1);
    cell_put(0x10);
    battle_row_linear();
    row_read(1);
    if (sel(0x202) != 0)
        goto L254;
L1a0:
    row_page(0x5A);
    sep_a();
    cell_poke0(cell_state(0x10));
    *(u16 *)D_8019EE60[0] = (u8)*(u16 *)D_8019ED40[0];
    row_page(0x5B);
    row_open_w(0);
    *(u16 *)D_8019EE60[0] = (u16)(*(u16 *)D_8019EE60[0] | ((u8)*(u16 *)D_8019ED40[0] << 8));
    row_page(0x5E);
    sep_a();
    cell_poke0(cell_state(0x10));
    *(u16 *)D_8019EE60[0] = (u8)*(u16 *)D_8019ED40[0];
    row_page(0x5F);
    row_open_w(0);
    row_page(0x60);
    row_page(0x61);
    goto L300;
L254:
    row_page(0x5A);
    sep_b();
    cell_tick_sub(cell_state(0x10));
    row_page(0x5B);
    cell_pos_back();
    *(u16 *)D_8019EE60[0] = (u8)*(u16 *)D_8019ED40[0];
    row_page(0x5E);
    sep_b();
    cell_tick_sub(cell_state(0x10));
    row_page(0x5F);
    cell_pos_back();
    row_page(0x5C);
    row_page(0x5D);
L300:
    row_page(0x5A);
    sep_a();
    row_open_w(0x78);
    cell_put(0x6A);
    row_page(0x5B);
    row_open_w0();
    cell_put(0x6B);
    row_page(0x5C);
    sep_a();
    row_open_w(0x78);
    cell_put(0x6C);
    row_page(0x5D);
    row_open_w0();
    cell_put(0x6D);
    row_page(0x6A);
    txt_draw(0x211F);
    row_page(0x6B);
    txt_draw(0x211F);
    row_page(0x6C);
    txt_draw(0x2120);
    row_page(0x6D);
    txt_draw(0x2120);
    txt_set(0x1700);
    io_poll(3);
    if (io_just() != 0)
        goto L4c8;
    latch(0x30);
    txt_draw(0x420C);
L4c8:
    func_8011EADC();
    key_page(0x7A);
    page_paint2(0xFFF);
    open_row(0x7D);
    row_prep(0x20);
    cell_cursor_read();
    row_pad();
    row_done();
    row_close();
    cell_cursor_adv2();
    func_800F9538();
    return;
}
