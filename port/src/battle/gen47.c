/* FF4 source-port — interpreted module for func_801488D4.
 * Ground truth: src/func_801488D4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801488D4(void)
{
    /* battle item-sublist: 0x14/0x15/0x16/0xE/0x10/0x12 windows,
       0x6CC0/0x300 gates; 80148D04/80148CAC/80148BE0 row handlers and
       the L148A74 refresh loop (67FC + 3F38(3C3C(id)) row pair). */
    txt_set_cur();
    if (gate(0x202) == 0)
        return;
    func_800F8F74();
    txt_set_cur();
    if (gate(0x202) != 0)
        goto L148924;
    func_80148D04();
    goto L14896C;
L148924:
    io_poll(0xFF);
    if (io_just() != 0)
        goto L14896C;
    io_poll(0xFE);
    if (io_just() != 0)
        goto L148964;
    func_80148CAC();
    goto L14896C;
L148964:
    func_80148BE0();
L14896C:
    txt_set_cur();
    row_sel_cell_cur();
    func_800F6C68();
    cell_put(0x14);
    func_800F6C68();
    cell_put(0x15);
    latch(0xD);
    cell_put(0x16);
    txt_set_cur();
    sep_b();
    func_800F8058(0x18);
    cell_put(0xE);
    txt_set_cur();
    sep_b();
    func_800F8058(0x18);
    cell_put(0x10);
    txt_set_cur();
    cell_put(0x12);
    txt_set_cur();
    row_prep(0x20);
    sep();
    row_prep_close();
    draw_pad_cur();
L148a74:
    for (;;) {
        func_800F67FC(0x14);
        io_poll(0xFF);
        if (io_just() != 0)
            return;
        func_800F9200();
        row_read(0xF0);
        func_800F7864();
        sep_a();
        cell_poke0(cell_state(0xE));
        func_80094588();
        cell_draw(0x300);
        cell_step();
        row_close2();
        row_read(0xF);
        sep_a();
        cell_poke0(cell_state(0x10));
        cell_draw(0x300);
        cell_step();
        step2();
        func_800F67FC(0x14);
        sep_a();
        cell_poke0(cell_state(0x12));
        cell_draw(0x300);
        cell_step();
        step2();
        txt_set(0x6CC0);
        if (gate(2) != 0)
            goto L148BAC;
        txt_set(0x300);
        goto L148BB8;
    L148BAC:
        txt_set(0x300);
    L148BB8:
        cell_draw_cur();
        cell_step();
    }
}
