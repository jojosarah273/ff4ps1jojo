/* FF4 source-port — interpreted module for func_80139704.
 * Ground truth: src/func_80139704.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80139704(void)
{
    /* ability stat-cast: 0x1440/0x1340/0x1441/0x1442 gates, 0x45/0x41
       windows, 80139694 intro; loop L13978C (3F38(3B04) rows), then
       the L139874 stat block with 80120E2C/80120E9C/8012AAC0/
       801264C0. */
    func_80139694();
    txt_cell(0x1440);
    if (gate(2) != 0)
        return;
    io_poll(0x19);
    if (io_just() != 0)
        return;
    io_poll(0xC8);
    if (io_just() != 0)
        return;
    io_poll(0xEE);
    if (io_go() != 0)
        return;
    latch(0x7E);
    cell_put(0x45);
    cell_fmt2(0x41);
L13978c:
    for (;;) {
        cell_push_c8_d58(0x1340);
        if (gate(2) != 0)
            goto L139874;
        if (io_press(cell_state_of()) == 0)
            goto L13981C;
        cell_push_c8_d58(0x1341);
        sep_a();
        cell_poke0(cell_state_of());
        io_poll(0x64);
        if (io_go() != 0)
            goto L139874;
    L13981C:
        step2();
        step2();
        poll_pair(0x45);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    midrow_paint_b();
    draw_pad_cur();
    battle_rows_29();
    config_row_26528();
    return;
L139874:
    txt_cell(0x1440);
    cell_pull_c8(0x1340);
    txt_cell(0x1441);
    sep_a();
    cell_poke0(cell_state_of());
    cell_pull_c8(0x1341);
    page_paint(0x1440);
    page_paint(0x1441);
    func_80120E9C();
    func_8012AAC0();
    func_801264C0();
    return;
}
