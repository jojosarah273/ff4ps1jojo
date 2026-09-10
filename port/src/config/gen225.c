/* FF4 source-port — interpreted module for fn_1x23320.
 * Ground truth: src/fn_1x23320.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x23320(void)
{
    row_info(0x4B);
    tail(0x48);
    txt_cell(3);
    window_state_byte_variant_d50_a0_x(0x80);
    if (io_just() == 0)
        goto L3400;
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_put(0x45);
    txt_cell(4);
    cell_tick_dbl();
    cell_flags_repack2();
    cell_tick_dbl();
    cell_flags_repack2();
    cell_tick_dbl();
    row_read(1);
    cell_tick_or(cell_state(0x45));
    if (ticker_reblend2(2) != 0)
        goto L3440;
    cell_cursor_dec();
    fn_1x23aa8();
    rows_u16_d44_d58_swap_with_c_prep();
    row_close2();
    poll_pair_cur();
    poll_pair_cur();
    goto L3488;
L3400:
    fn_1x23aa8();
    draw_pad_cur();
    battle_rows_100();
    return;
L3440:
    txt_set(0x1BC2);
    if (gate(2) == 0)
        return;
    cell_fmt2(0x48);
    cell_push_c8_d58(1);
    cell_cursor_dec();
    fn_1x23aa8();
    row_close2();
    goto L3640;
L3488:
    cell_put(0x45);
    latch(0x21);
    cell_put(0x46);
    row_prep(0x20);
    sep_a();
    cell_peek0(cell_state(0x29));
    row_prep_close();
    wnd_open(8);
L34fc:
    for (;;) {
        row_page(0x45);
        window_state_byte_variant_d50_a0_x(0x80);
        if (io_just() != 0)
            goto L3574;
        row_page(0x46);
        cell_pull_c8(0x34);
        cell_tick_or(cell_state_of());
        cell_pull_c8(1);
        goto L3584;
    L3574:
        latch(0xFF);
        cell_pull_c8();
    L3584:
        row_sync();
        row_prep(0x20);
        sep_b();
        cell_pos_back2(0x40);
        row_prep_close();
        latch(0xFF);
        cell_pull_c8();
        row_done();
        key_page(0x46);
        row_arm2(cell_state(0x45));
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    return;
L3640:
    row_read(0xF);
    cell_cursor_dec();
    row_prep(0x20);
    sep_a();
    cell_peek0(cell_state(0x29));
    row_prep_close();
    row_close2();
    row_sel_cell_cur();
    cell_put(0x45);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    cell_poke0(cell_state(0x45));
    cell_put(0x45);
    open_row(0x46);
    page(0x45);
    latch(6);
    cell_put(0x45);
    fn_1x2371c();
    return;
}
