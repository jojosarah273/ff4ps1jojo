/* FF4 source-port — interpreted module for fn_1x4c13c.
 * Ground truth: src/fn_1x4c13c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x4c13c(void)
{
    txt_set(0x34C5);
    if (gate(0x202) == 0)
        return;
    battle_rows_d5a0_row_gate_xff_pick();
    battle_rows_xf42b_text_x_xaa_bytes();
    battle_rows_x_dc_c_x26_x27_row();
    wnd_open(5);
    latch(0x27);
    func_800760D0();
    fn_1x48e08();
    sep();
    label(0xF111);
    label(0xF113);
    fn_1x48e80();
    latch(0x60);
    cell_pull_c8_lo(0x2107);
    latch(0x58);
    cell_pull_c8_lo(0x2108);
    latch(3);
    txt_draw(0xF1B5);
    cell_set50_from40();
    txt_draw(0xF1B3);
    txt_set(0xED4E);
    row_read(0xBF);
    txt_draw(0xED4E);
    sep();
    func_80071C2C();
    func_80091AB8();
L23c:
    for (;;) {
        func_8007259C();
        battle_rows_x1_x40_windows_d14_row();
        txt_set(0xF111);
        sep_a();
        row_open_w(4);
        txt_draw(0xF111);
        txt_draw(0xF133);
        txt_set(0xF113);
        sep_a();
        row_open_w(8);
        txt_draw(0xF113);
        txt_draw(0xF134);
        draw_pad_cur();
    L2a4:
        for (;;) {
            wnd_open_cur();
            fn_1x48f60();
            cell_pull_c8(0x7614);
            cell_pull_c8(0x7694);
            cell_pull_c8(0x7714);
            cell_pull_c8(0x7794);
            cell_pull_c8(0x7814);
            wnd_open(1);
            fn_1x48f60();
            cell_cursor_dec();
            cell_cursor_dec();
            cell_pull_c8(0x7612);
            cell_pull_c8(0x7692);
            cell_pull_c8(0x7712);
            cell_pull_c8(0x7792);
            cell_pull_c8(0x7812);
            row_close2();
            if (gate(0x80) != 0)
                goto L34c;
            sep();
            goto L354;
        L34c:
            latch(1);
        L354:
            cell_pull_c8(0x7613);
            cell_pull_c8(0x7693);
            cell_pull_c8(0x7713);
            cell_pull_c8(0x7793);
            cell_pull_c8(0x7813);
            row_close2();
            cell_pull_c8(0x7992);
            cell_pull_c8(0x7A12);
            cell_pull_c8(0x7A92);
            cell_pull_c8(0x7B12);
            poll_t(0x30);
            if (io_go() != 0)
                goto L3c4;
            cell_pull_c8(0x7B92);
        L3c4:
            txt_set(0xF133);
            sep_a();
            row_open_w(8);
            txt_draw(0xF133);
            txt_set(0xF134);
            sep_a();
            row_open_w(8);
            txt_draw(0xF134);
            poll_t(0x80);
            if (io_just() == 0)
                goto L2a4;
            txt_set(0xF112);
            txt_draw(0xF1B4);
            txt_set(0xF111);
            txt_draw(0xF133);
            txt_set(0xF113);
            txt_draw(0xF134);
            page_paint2(0xF112);
            txt_set(0xF112);
            io_poll(0x64);
            if (io_just() == 0)
                goto L23c;
            page_paint2(0xF425);
            return;
        }
    }
}
