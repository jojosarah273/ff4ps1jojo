/* FF4 source-port — interpreted module for func_801449D0.
 * Ground truth: src/func_801449D0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801449D0(void)
{
    /* battle magic-confirm: 0x1813/0x1901 texts, 0x340/0x341 state
       cells with 6434(2) gates; loops L144A50 (5958(0x78)) and
       L144B90 (5A90(0x78)). */
    txt_set(0x1813);
    txt_cell(0x1901);
    row_read(3);
    cell_put(1);
    sep();
L144a50:
    for (;;) {
        txt_set(0x6CC0);
        if (gate(2) != 0)
            goto L144AB0;
        txt_set_cur();
        if (gate(2) != 0)
            goto L144AC8;
    L144A80:
        txt_cell(0x340);
        func_800F8960();
        goto L144AD8;
    L144AB0:
        txt_set_cur();
        if (gate(2) != 0)
            goto L144A80;
    L144AC8:
        txt_cell(0x340);
        func_800F8960(0x340);
    L144AD8:
        txt_cell_cur();
        sep_a();
        cell_poke0(cell_state(1));
        cell_poke0(cell_state_of());
        func_800F8960(0x341);
        cell_step();
        cell_step();
        step2();
        step2();
        step2();
        step2();
        poll_t(0x78);
        if (io_just() == 0)
            continue;
        break;
    }
    sep();
L144b90:
    for (;;) {
        func_800F6D70();
        func_800F7864();
        func_800F76E8();
        func_800F7CC8(cell_state_of());
        sep_b();
        func_800F7CC8(cell_state_of());
        step2();
        step2();
        poll_t(0x78);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
