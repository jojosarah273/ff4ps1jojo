/* FF4 source-port — interpreted module for fn_1x43908.
 * Ground truth: src/fn_1x43908.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x43908(void)
{
    fn_1x45278();
    battle_row_d548();
    latch(8);
    txt_draw(0xF326);
    func_80148C6C();
    sep();
    open_row_cur();
    open_row(2);
L3968:
    for (;;) {
        txt_cell(0x1900);
        cell_draw(0xEBE6);
        row_page(2);
        cell_draw(0xEC2E);
        sep_a();
        row_open_w(8);
        cell_put(2);
        io_poll(0x88);
        if (io_just() == 0)
            goto L39c0;
        open_row(2);
    L39c0:
        sep();
        cell_draw(0xEC76);
        cell_draw(0xED06);
        txt_cell(0x1900);
        cell_draw(0xECBE);
        cell_step();
        poll_t(0x48);
        if (io_just() == 0)
            continue;
        break;
    }
    fn_1x4086c();
    wnd_open(0x80);
L3a18:
    for (;;) {
        row_open();
        gpu_driver_run();
        battle_magic_status_x300_x303_cell();
        sep();
    L3a54:
        for (;;) {
            txt_cell(0x1900);
            row_read(2);
            sep_a();
            row_open_w(2);
            cell_put_cur();
            txt_cell(0xEC2E);
            sep_a();
            cell_poke0(cell_state_of());
            io_poll(0x88);
            if (io_go() == 0)
                goto L3adc;
            cell_dispatch(cell_state(0xED06));
            sep();
        L3adc:
            cell_draw(0xEC2E);
            cell_step();
            poll_t(0x48);
            if (io_just() == 0)
                continue;
            break;
        }
        sep();
        for (;;) {
            latch(0x18);
            cell_put(0x28);
            tail_cur();
            txt_cell(0xECBE);
            sep_a();
            row_open_w(8);
            cell_draw(0xECBE);
            func_80148FA0();
            page_cur();
            cell_draw(0xEC76);
            cell_step();
            poll_t(0x48);
            if (io_just() != 0)
                break;
        }
        sep();
        for (;;) {
            txt_cell(0x1900);
            row_read(0xF);
            cell_put_cur();
            txt_cell(0xEBE6);
            sep_b();
            cell_tick_sub(cell_state_of());
            cell_draw(0xEBE6);
            txt_cell(0xEC0A);
            sep_b();
            cell_pos_back(4);
            cell_draw(0xEC0A);
            cell_step();
            poll_t(0x24);
            if (io_just() != 0)
                break;
        }
        row_close();
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    cell_clear_bank(0xEF87);
    func_80148C6C();
    fn_1x452c8();
    return;
}
