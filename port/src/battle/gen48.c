/* FF4 source-port — interpreted module for func_8014323C.
 * Ground truth: src/func_8014323C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014323C(void)
{
    page_paint2_cur();
    row_open();
    sep();
    cell_fmt2(6);
L327C:
    for (;;) {
        txt_cell_cur();
        if (gate(0x80) != 0)
            goto L3304;
        sep_a();
        cell_poke0(cell_state_of());
        if (io_go() != 0)
            goto L347C;
        goto L336C;
    L3304:
        sep_a();
        cell_poke0(cell_state_of());
        if (io_go() != 0)
            goto L347C;
    L336C:
        func_800F8960(0x300);
        txt_cell_cur();
        if (gate(0x80) != 0)
            goto L33FC;
        sep_a();
        cell_poke0(cell_state(1));
        if (io_go() != 0)
            goto L347C;
        goto L3464;
    L33FC:
        sep_a();
        cell_poke0(cell_state(1));
        if (io_go() != 0)
            goto L347C;
    L3464:
        io_poll(0x80);
        if (io_go() == 0)
            goto L349C;
    L347C:
        latch(0xF0);
        func_800F8960(0x300);
        func_800F8960(0x301);
        goto L34A4;
    L349C:
        func_800F8960(0x301);
    L34A4:
        txt_set_cur();
        io_poll(0xFF);
        if (io_just() == 0)
            goto L350C;
        txt_cell_cur();
        if (gate(2) != 0)
            goto L34FC;
        latch(0xF0);
        func_800F8960(0x300);
        func_800F8960(0x301);
        goto L35B8;
    L34FC:
        txt_cell_cur();
        goto L3548;
    L350C:
        row_read_cur();
        row_sel_cell_cur();
        sep_a();
        cell_poke0(cell_state_of());
    L3548:
        func_800F8960(0x302);
        txt_set(0x6CC0);
        if (gate(2) != 0)
            goto L35A8;
        func_800F6D70(0x300);
        func_800F8960(0x300);
        latch(0x7F);
        func_800F8960(0x303);
        goto L35B8;
    L35A8:
        latch(0x3F);
        func_800F8960(0x303);
    L35B8:
        cell_step();
        step2();
        step2();
        step2();
        step2();
        if (func_800F56AC(cell_state_of()) == 0)
            continue;
        break;
    }
    row_info(6);
    row_close();
    func_800F8F74();
    return;
}
