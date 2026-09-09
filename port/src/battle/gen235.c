/* FF4 source-port — interpreted module for func_8014F2CC.
 * Ground truth: src/func_8014F2CC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8014F2CC(void)
{
    row_page(0x18);
    row_sel_cell_cur();
    txt_cell(0xF251);
    sep_a();
    cell_poke0(cell_state(0xF268));
    cell_put(0x12);
    txt_cell(0xF252);
    sep_a();
    cell_poke0(cell_state(0xF269));
    cell_put(0x13);
    wnd_open_cur();
LF37C:
    for (;;) {
        txt_set(0x6CC0);
        if (gate(2) != 0)
            goto LF5ac;
        txt_cell(0xEBE6);
        sep_a();
        row_open_w(0xF);
        if (func_800F53FC() == 0)
            goto LF46c;
        sep_a();
        cell_poke0(cell_state(0x12));
        if (io_go() != 0)
            goto LF4d4;
        goto LF544;
    LF46c:
        sep_a();
        cell_poke0(cell_state(0x12));
        if (io_go() != 0)
            goto LF544;
    LF4d4:
        cell_pull_c8(0x300);
        txt_cell(0xEBE7);
        sep_a();
        cell_poke0(cell_state(0x13));
        io_poll(0x8C);
        if (io_go() == 0)
            goto LF564;
        io_poll(0xF8);
        if (io_go() != 0)
            goto LF564;
    LF544:
        latch(0xF0);
        cell_pull_c8(0x300);
        cell_pull_c8(0x301);
        goto LF56c;
    LF564:
        cell_pull_c8(0x301);
    LF56c:
        txt_cell(0xEBE8);
        cell_pull_c8(0x302);
        txt_cell(0xEBE9);
        cell_pull_c8(0x303);
        goto LF73c;
    LF5ac:
        txt_cell(0xEBE6);
        if (gate(0x8080) != 0)
            goto LF634;
        sep_a();
        cell_poke0(cell_state(0x12));
        if (io_go() != 0)
            goto LF69c;
        goto LF6f4;
    LF634:
        sep_a();
        cell_poke0(cell_state(0x12));
        if (io_go() != 0)
            goto LF6f4;
    LF69c:
        cell_pull_c8(0x300);
        txt_cell(0xEBE7);
        sep_a();
        cell_poke0(cell_state(0x13));
        io_poll(0x8C);
        if (io_go() == 0)
            goto LF714;
        io_poll(0xF8);
        if (io_go() != 0)
            goto LF714;
    LF6f4:
        latch(0xF0);
        cell_pull_c8(0x300);
        cell_pull_c8(0x301);
        goto LF71c;
    LF714:
        cell_pull_c8(0x301);
    LF71c:
        txt_cell(0xEBE8);
        cell_pull_c8(0x302);
        txt_cell(0xEBE9);
        cell_pull_c8(0x303);
    LF73c:
        page_paint2(0xF250);
        if (cell_flags_cmp(cell_state(0xE)) == 0)
            continue;
        break;
    }
    return;
}
