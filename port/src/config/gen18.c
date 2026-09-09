/* FF4 source-port — interpreted module for func_80153608.
 * Ground truth: src/func_80153608.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80153608(void)
{
    func_801531CC();
    io_poll(0x32);
    if (io_go() == 0)
        goto L9a4;
    draw_pad_cur();
    row_info(0xAB);
    cell_pull60(0x289C);
    cell_pull60(0x289E);
L65c:
    for (;;) {
        cell_fmt2(0xAB);
        cell_push_c8_d58(0x3588);
        tail(0xA9);
        row_arm2(cell_state(0xA9));
        row_sel_cell2_cur();
        row_sel2(cell_state(0xAA));
        page(0xA9);
        cell_push_c8();
        txt_draw(0x393D);
        cell_push_c8();
        txt_draw(0x393E);
        cell_push_c8_d58(0x38F0);
        label(0x393F);
        func_8015236C();
        sep_a();
        txt_set(0x3941);
        cell_poke0(cell_state(0x289C));
        txt_draw(0x289C);
        txt_set(0x3942);
        cell_poke0(cell_state(0x289D));
        txt_draw(0x289D);
        txt_set(0x3943);
        cell_poke0(cell_state(0x289E));
        txt_draw(0x289E);
        key_page(0xAB);
        row_page(0xAB);
        io_poll(3);
        if (io_just() == 0)
            continue;
        break;
    }
    cell_word_half(cell_state(0x289E));
    cell_flags_repack();
    cell_word_half_s(cell_state(0x289D));
    func_800F7D0C();
    cell_word_half_s(cell_state(0x289C));
    cell_word_half(cell_state(0x289E));
    cell_flags_repack();
    cell_word_half_s(cell_state(0x289D));
    func_800F7D0C();
    cell_word_half_s(cell_state(0x289C));
    txt_set(0x289C);
    cell_tick_or(cell_state(0x289D));
    if (func_800F7918(2) != 0)
        goto L9a4;
    txt_set(0x16A0);
    cell_tick_or(cell_state(0x16A1));
    cell_tick_or(cell_state(0x16A2));
    if (func_800F7918(2) != 0)
        goto L9a4;
    txt_set(0x16A0);
    cell_put(0xA9);
    txt_set(0x16A1);
    cell_put(0xAA);
    sep_b();
    txt_set(0x16A0);
    cell_tick_sub(cell_state(0x289C));
    txt_draw(0x16A0);
    txt_set(0x16A1);
    cell_tick_sub(cell_state(0x289D));
    txt_draw(0x16A1);
    txt_set(0x16A2);
    cell_tick_sub(cell_state(0x289E));
    txt_draw(0x16A2);
    if (io_go() != 0)
        goto L954;
    row_page(0xA9);
    txt_draw(0x289C);
    row_page(0xAA);
    txt_draw(0x289D);
    cell_clear_bank(0x16A0);
    cell_clear_bank(0x16A1);
    cell_clear_bank(0x16A2);
L954:
    txt_set(0x289C);
    txt_draw(0x359A);
    txt_set(0x289D);
    txt_draw(0x359B);
    cell_clear_bank(0x359C);
    latch(0x37);
    txt_draw(0x34CA);
    func_80153264();
    latch(0xFF);
    txt_draw(0x34CC);
L9a4:
    latch(5);
    func_80150C38();
    return;
}
