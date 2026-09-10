/* FF4 source-port — interpreted module for battle_magic_status_x300_x303_cell.
 * Ground truth: src/battle_magic_status_x300_x303_cell.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_magic_status_x300_x303_cell(void)
{
    /* battle magic-status: 0x300/0x303 cells, 0x6CC0/0x1813 texts, and
       the 6434(0x202) row gates; loop L143768 polls 5958(0x48). */
    sep();
    draw_pad(0x40);
L143768:
    for (;;) {
        txt_cell_cur();
        if (gate(0x202) != 0)
            goto L1437A0;
        latch(0xF0);
        cell_pull_c8(0x300);
        cell_pull_c8(0x301);
        goto L143890;
    L1437A0:
        txt_set(0x6CC0);
        if (gate(2) != 0)
            goto L143834;
        txt_cell_cur();
        sep_a();
        cell_poke0(cell_state_of());
        sep_b();
        cell_pos_back(8);
        cell_pull_c8(0x300);
        latch(0x7F);
        cell_pull_c8(0x303);
        goto L143880;
    L143834:
        txt_cell_cur();
        sep_a();
        cell_poke0(cell_state_of());
        cell_pull_c8(0x300);
        latch(0x3F);
        cell_pull_c8(0x303);
    L143880:
        txt_cell_cur();
        cell_pull_c8(0x301);
    L143890:
        txt_set(0x1813);
        row_read(2);
        sep_a();
        row_open_w(0x9C);
        cell_pull_c8(0x302);
        cell_step();
        step2();
        step2();
        step2();
        step2();
        poll_t(0x48);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
