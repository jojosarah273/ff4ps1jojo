/* FF4 source-port — interpreted module for func_80135330.
 * Ground truth: src/func_80135330.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80135330(void)
{
    /* ability/skill screen: 0x34 window + 0xDB cell, 0x1B7C/0x1BCB
       texts; 80134948/80125934/8012B168/80120FBC/801241B8/80120F1C
       home row, then 80135298/80135574 detail rows, the L13546C loop
       (801378E0/80137938 + 6434(2) gate) and 801361A4/8012B0D8 tail. */
    row_page(0x34);
    cell_put(0xDB);
    latch_cur();
    func_80134948();
    io_poll_cur();
    if (io_just() != 0)
        goto L1353C4;
    func_80125934();
    animation_row_300b();
    midrow_pad88_run();
    config_row_b600();
    draw_pad_cur();
    func_8011FB74();
    battle_row_45b();
    func_8011FF40();
    return;
L1353C4:
    midrow_paint_c();
    config_row_d600b();
    draw_pad_cur();
    battle_rows_sync();
    func_80135298();
    draw_pad_cur();
    battle_rows_sync();
    draw_pad_cur();
    battle_rows_29();
    draw_pad_cur();
    battle_rows_sync();
    func_80135574();
    txt_draw(0x1B7D);
    midrow_pad88_run();
    battle_row_45b();
    cell_clear_bank(0x1BCB);
L13546c:
    for (;;) {
        func_801378E0();
        func_80125934();
        txt_set(0x1B7C);
        draw_pad(0x19A);
        func_801206DC();
        midrow_pad88_run();
        config_row_7800();
        midrow_degen();
        func_80137938();
        txt_set(0x1BCB);
        if (gate(2) != 0)
            goto L1354DC;
        cell_clear_bank(0x1BCB);
        func_8013554C();
    L1354DC:
        row_page_cur();
        row_read(0x80);
        if (sel(2) != 0)
            goto L13551C;
        draw_pad(0x310);
        func_801361A4();
        animation_row_310();
        return;
    L13551C:
        row_page(1);
        row_read(0x80);
        if (sel(2) != 0)
            continue;
        break;
    }
    return;
}
