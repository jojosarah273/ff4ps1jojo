/* FF4 source-port — interpreted module for fn_1x3d720.
 * Ground truth: src/fn_1x3d720.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x3d720(void)
{
    battle_row_wrap();
    fn_1x48de8();
    latch(0x10);
    txt_draw(0xF1B3);
    txt_draw(0xF1F3);
    sep();
    txt_draw(0xF398);
    latch(0x30);
    txt_draw(0xF399);
    battle_row_d548();
    fn_1x4086c();
L780:
    for (;;) {
        gpu_driver_run();
        battle_rows_d690_prep_x340_x342_x3();
        sep();
        fn_1x43d14();
        sep_a();
        cell_poke0(cell_state(0xF399));
        cell_put(2);
        txt_set(0xF398);
        cell_put_cur();
        sep();
        latch(0x20);
        battle_rows_twin();
        draw_pad_cur();
        sep();
        fn_1x3d598();
        cell_dec_bank(0xF399);
        cell_dec_bank(0xF399);
        txt_set(0xF398);
        sep_b();
        cell_pos_back(8);
        txt_draw(0xF398);
        io_poll(0x80);
        if (io_just() == 0)
            continue;
        break;
    }
    latch(0xC0);
    txt_draw(0xF133);
    sep_a();
    row_open_w(0x40);
    txt_draw(0xF173);
    latch(0x20);
    txt_draw(0xF1B3);
    txt_draw(0xF1F3);
    latch(0x80);
    txt_draw(0xF398);
    latch(8);
    txt_draw(0xF399);
L8d4:
    for (;;) {
        gpu_driver_run();
        battle_rows_d690_prep_x340_x342_x3();
        sep();
        fn_1x43d64();
        sep_a();
        cell_poke0(cell_state(0xF398));
        cell_put_cur();
        fn_1x43d14();
        sep_a();
        cell_poke0(cell_state(0xF399));
        cell_put(2);
        sep();
        fn_1x3d598();
        sep();
        latch(0x20);
        battle_rows_twin();
        txt_set(0xF1B3);
        io_poll(8);
        if (io_go() == 0)
            goto L9f8;
        sep();
        poll_spin();
        battle_rows_two_f38_b04_pair_reads();
    }
L9f8:
    sep();
    txt_set(0xF463);
    cell_put(4);
La28:
    for (;;) {
        row_arm2(cell_state(4));
        if (cell_flags_zero50(0x101) != 0)
            goto Laa8;
        txt_set(0xF462);
        if (gate(0x80) != 0)
            goto La80;
        txt_cell(0xF053);
        cell_put_cur();
        txt_cell(0xF054);
        goto La98;
    La80:
        txt_cell(0xF043);
        cell_put_cur();
        txt_cell(0xF044);
    La98:
        cell_put(1);
        goto Lad0;
    Laa8:
        cell_step();
        cell_step();
        poll_t(0x10);
        if (io_just() == 0)
            continue;
        break;
    }
Lad0:
    latch(8);
    txt_draw(0xF112);
    row_page_cur();
    io_poll(0x80);
    if (io_go() == 0)
        goto Lb10;
    latch(0x58);
    goto Lb18;
Lb10:
    latch(0xA8);
Lb18:
    txt_draw(0xF111);
    page_cur();
    label(0xF113);
    latch(0x10);
    txt_draw(0xF115);
    fn_1x490ac();
Lb48:
    for (;;) {
        gpu_driver_run();
        fn_1x3d690();
        fn_1x49374();
        if (io_go() != 0)
            break;
        open_row(1);
        open_row(3);
        txt_set(0xF118);
        sep_b();
        cell_pos_back(8);
        cell_put_cur();
        txt_set(0xF119);
        sep_b();
        cell_pos_back(8);
        cell_put(2);
        sep();
        fn_1x3d598();
    }
    cell_clear_bank(0xEF87);
    return;
}
