/* FF4 source-port — interpreted module for battle_magic_cast_flow_d12c_de8_pr.
 * Ground truth: src/battle_magic_cast_flow_d12c_de8_pr.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_magic_cast_flow_d12c_de8_pr(void)
{
    /* battle magic-cast flow: 8013D12C/80148DE8 prep, wait loop L13E340
       (43E44/5958), row read L13E3EC (4FAC(0x101)/6434(0x80) gates),
       8013E200 cast helper loop L13E494, exit loop L13E510. */
    txt_draw_cur();
    battle_row_wrap();
    func_80148DE8();
    sep();
L13e340:
    for (;;) {
        cell_push_c8();
        cell_draw_cur();
        cell_push_c8();
        cell_draw_cur();
        latch(0xFC);
        battle_rows_twin();
        cell_step();
        poll_t(4);
        if (io_just() == 0)
            continue;
        break;
    }
L13e398:
    for (;;) {
        gpu_driver_run();
        sep();
        txt_set_cur();
        cell_put(0xA);
    L13e3ec:
        for (;;) {
            cell_state(0xA);
            row_arm2_cur();
            if (cell_flags_zero50(0x101) != 0)
                goto L13E4C4;
            txt_set_cur();
            if (gate(0x80) != 0)
                goto L13E454;
            txt_cell_cur();
            sep_a();
            row_open_w(0x10);
            cell_put_cur();
            txt_cell_cur();
            goto L13E47C;
        L13E454:
            txt_cell_cur();
            sep_b();
            cell_pos_back(0xC);
            cell_put_cur();
            txt_cell_cur();
        L13E47C:
            cell_put(2);
            row_open();
            wnd_open_cur();
        L13e494:
            for (;;) {
                battle_item_rows_x1_x2_x3_x4_x5();
                cell_step();
                poll_t(4);
                if (io_just() == 0)
                    continue;
                break;
            }
            row_close();
        L13E4C4:
            cell_step();
            cell_step();
            poll_t(0x10);
            if (io_just() == 0)
                continue;
            break;
        }
        sep();
    L13e510:
        for (;;) {
            battle_rows_twin();
            cell_step();
            poll_t(4);
            if (io_just() == 0)
                continue;
            break;
        }
        txt_set_cur();
        io_poll(0x80);
        if (io_go() != 0)
            continue;
        break;
    }
    return;
}
