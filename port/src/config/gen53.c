/* FF4 source-port — interpreted module for func_8013CBF0.
 * Ground truth: src/func_8013CBF0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013CBF0(void)
{
    io_poll(1);
    if (io_just() != 0)
        goto LCC30;
    io_poll(2);
    if (io_just() != 0)
        goto LCC78;
    return;
LCC30:
    latch(7);
    txt_draw(0xF11B);
    latch(5);
    txt_draw(0xF11C);
    latch(0x14);
    txt_draw(0xF118);
    cell_clear_bank(0xF116);
    latch(0xAE);
    goto LCCC0;
LCC78:
    latch(3);
    txt_draw(0xF11B);
    latch(8);
    txt_draw(0xF11C);
    latch(8);
    txt_draw(0xF116);
    latch(0xFF);
    txt_draw(0xF118);
    latch(0x9E);
LCCC0:
    func_8014D708();
    func_8013D12C();
    func_80148DE8();
    sep();
LCCFC:
    for (;;) {
        cell_cursor_dec();
        func_80143E44();
        row_close2();
        sep_a();
        row_open_w(0x20);
        cell_step();
        poll_t(8);
        if (io_just() != 0)
            break;
    }
    sep();
    func_80148E60();
    txt_set(0x48);
    row_sel_cell_cur();
    txt_cell(0xF053);
    sep_a();
    row_open_w(0x10);
    txt_draw(0xF111);
    txt_cell(0xF054);
    sep_b();
    cell_pos_back(8);
    txt_draw(0xF112);
    cell_clear_bank(0xF115);
    cell_clear_bank(0xF114);
    cell_clear_bank(0xF117);
LCDD4:
    for (;;) {
        gpu_driver_run();
        func_8013CF08();
        func_8014D96C();
        txt_set(0xF117);
        if (io_press(cell_state(0xF118)) != 0)
            goto LCE2C;
        txt_set(0xF117);
        func_80148E60();
        page_paint2(0xF117);
    LCE2C:
        txt_set(0xF116);
        if (gate(0x202) != 0)
            goto LCE98;
        sep();
        for (;;) {
            latch(4);
            func_80143E44();
            cell_step();
            poll_t(8);
            if (io_just() != 0)
                break;
        }
    LCE98:
        page_paint2(0xF114);
        txt_set(0xF114);
        cell_tick_and2(0xF11B);
        if (sel(0x202) != 0)
            goto LCEC8;
        page_paint2(0xF115);
    LCEC8:
        txt_set(0xF115);
        if (io_press(cell_state(0xF11C)) == 0)
            continue;
        break;
    }
    func_8013D12C();
    return;
}
