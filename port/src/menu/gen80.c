/* FF4 source-port — interpreted module for func_800FD494.
 * Ground truth: src/func_800FD494.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FD494(void)
{
    /* battle vertical-menu: 3D/3E label windows, 0xC0 window row gate,
       0x17EE text with the 60A8(0x202) check; key ladder 0x2B-0xFC
       advances the cursor; closes on 8D6C(0x3D). */
    cell_put(0x3D);
    open_row(0x3E);
    row_arm2(cell_state(0x3D));
    row_sel_cell2_cur();
    row_sel2(cell_state(0x3E));
    row_arm2(cell_state(0x3D));
    row_sel_cell2_cur();
    row_sel2(cell_state(0x3E));
    row_arm2(cell_state(0x3D));
    row_sel_cell2_cur();
    row_sel2(cell_state(0x3E));
    row_page(0xC0);
    if (gate(0x202) != 0)
        goto LFD5B0;
    row_page(0x87);
    func_800F9690();
    func_800F6C68();
    sep_a();
    cell_poke0(cell_state(0x17EE));
    key_page(0x87);
    if (func_800F60A8(0x202) != 0)
        goto LFD5B8;
    txt_set(0x17EE);
    sep_a();
    row_open_w(0x11);
    txt_draw(0x17EE);
    goto LFD5B8;
LFD5B0:
    latch(0xFF);
LFD5B8:
    page(0x3D);
    io_poll(0x2B);
    if (io_go() == 0)
        goto LFD6A0;
    cell_step();
    io_poll(0x56);
    if (io_go() == 0)
        goto LFD6A0;
    cell_step();
    io_poll(0x81);
    if (io_go() == 0)
        goto LFD6A0;
    cell_step();
    io_poll(0xAC);
    if (io_go() == 0)
        goto LFD6A0;
    cell_step();
    io_poll(0xCC);
    if (io_go() == 0)
        goto LFD6A0;
    cell_step();
    io_poll(0xEC);
    if (io_go() == 0)
        goto LFD6A0;
    cell_step();
    io_poll(0xFC);
    if (io_go() == 0)
        goto LFD6A0;
    cell_step();
LFD6A0:
    tail(0x3D);
    return;
}
