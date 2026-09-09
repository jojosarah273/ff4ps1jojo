/* FF4 source-port — interpreted module for func_80141760.
 * Ground truth: src/func_80141760.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80141760(void)
{
    txt_set(0x49);
    row_sel_cell_cur();
    txt_cell(0xF053);
    row_read(0xF8);
    txt_draw(0xF111);
    row_info();
    cell_pull60(0xF133);
    txt_cell(0xF054);
    row_read(0xF8);
    txt_draw(0xF112);
    cell_pull60(0xF135);
    row_info();
    cell_pull60(2);
    txt_draw(0xF137);
    row_prep(0x20);
    row_sync2(0x28);
    sep_b();
    cell_pos_sub16(cell_state_of());
    sep_b();
    cell_pos_sub16(cell_state(2));
    cell_pull9_hi(0xF406);
    row_sync2(0x50);
    cell_pull9_hi(0xF408);
    row_prep_close();
    config_row_8468();
L1898:
    for (;;) {
        gpu_driver_run();
        row_prep(0x20);
        cell_push9(0xF406);
        sep_a();
        cell_pos_fwd(8);
        cell_pull9_hi(0xF406);
        cell_push9(0xF408);
        sep_b();
        cell_pos_back2(8);
        cell_pull9_hi(0xF408);
        sep();
        row_prep_close();
        config_row_8468();
        cell_dec_bank(0xF137);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    latch(0x38);
    txt_draw(0xF113);
    latch(0x50);
    txt_draw(0xF114);
    latch(8);
    txt_draw(0xF115);
    func_801490AC();
    func_80097438();
    latch(0x28);
    func_8014D528();
L1968:
    for (;;) {
        gpu_driver_run();
        func_80149374();
        func_80097500();
        row_page(0x2B);
        cell_put(0x2A);
        row_page(0x2B);
        if (gate(0x80) != 0)
            goto L19b8;
        open_row(0x2B);
        goto L19c8;
    L19b8:
        latch(0xFF);
        cell_put(0x2B);
    L19c8:
        row_prep(0x20);
        cell_push9(0xF406);
        sep_a();
        cell_pos_fwd(8);
        cell_pull9_hi(0xF406);
        cell_push9(0xF408);
        sep_b();
        cell_pos_sub16(cell_state(0xF121));
        cell_pull9_hi(0xF408);
        sep();
        row_prep_close();
        txt_set(0xF406);
        if (gate(2) != 0)
            goto L1a50;
        func_801401CC();
    }
L1a50:
    wnd_open_cur();
    label(0xF406);
    label(0xF408);
    config_row_8468();
    return;
}
