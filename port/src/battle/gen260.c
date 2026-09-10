/* FF4 source-port — interpreted module for battle_magic_cast_x1900_text_spell.
 * Ground truth: src/battle_magic_cast_x1900_text_spell.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_magic_cast_x1900_text_spell(void)
{
    /* battle magic-cast: 0x1900 text + spell rows (8768 draws), loops
       L144084 (row refresh), L14411C, L144180 (43E44 wait), L1441D8
       (4x 6B68/8768 spell-cell reads), L14425C; 80145278 intro,
       8013D12C/80140894/8013EF78 and 80140558/80143ED4 prep, 801452C8
       commit. */
    fn_1x45278();
    sep();
L144084:
    for (;;) {
        txt_cell(0x1900);
        cell_draw_cur();
        sep_a();
        row_open_w(0x40);
        cell_draw_cur();
        page_paint_cur();
        latch(8);
        cell_draw_cur();
        latch(0x98);
        cell_draw_cur();
        page_paint_cur();
        page_paint_cur();
        cell_step();
        poll_t(0x40);
        if (io_just() == 0)
            continue;
        break;
    }
    battle_row_wrap();
    fn_1x40894();
    battle_row_d548();
L14411C:
    for (;;) {
        gpu_driver_run();
        battle_rows_d64_d14_d4c8_rows_loop();
        txt_set_cur();
        sep_b();
        cell_pos_back(6);
        txt_draw_cur();
        latch(1);
        txt_draw_cur();
        sep();
    L144180:
        for (;;) {
            latch(0x10);
            battle_rows_twin();
            cell_step();
            poll_t(0x40);
            if (io_just() != 0)
                break;
        }
        txt_set_cur();
        sep_a();
        row_open_w(2);
        txt_draw_cur();
        wnd_open(0x3E);
    L1441D8:
        for (;;) {
            txt_cell_cur();
            cell_draw_cur();
            txt_cell_cur();
            cell_draw_cur();
            txt_cell_cur();
            cell_draw_cur();
            txt_cell_cur();
            cell_draw_cur();
            cell_set50_from54();
            poll_t_cur();
            if (io_just() != 0)
                break;
        }
        sep();
    L14425C:
        for (;;) {
            txt_cell_cur();
            if (gate(2) != 0)
                continue;
            cell_step();
            poll_t(0x40);
            if (io_just() != 0)
                break;
        }
        break;
    }
    cell_clear_bank();
    fn_1x452c8();
    return;
}
