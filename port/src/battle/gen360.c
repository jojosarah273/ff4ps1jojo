/* FF4 source-port — interpreted module for battle_party_status_rows_xa6d_xa6f.
 * Ground truth: src/battle_party_status_rows_xa6d_xa6f.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_party_status_rows_xa6d_xa6f(void)
{
    /* battle party-status rows: 0xA6D-0xA6F texts, 0x20/0x21/0x24
       windows, 0x300-0x303 cells, 0xACD/0xACE texts, 800FC0DC commit;
       loop L116180 on 4120(0x202). */
    txt_cell(0xA6D);
    txt_cell_cur();
    cell_put(0x20);
    txt_cell(0xA6F);
    cell_put(0x21);
    row_page(0x24);
    row_open();
    row_sync();
    row_close();
    row_done();
L116180:
    for (;;) {
        row_page(0x20);
        sep_a();
        cell_poke0(cell_peek_cur());
        cell_pull_c8(0x300);
        cell_push_c8();
        io_poll(0xFF);
        if (io_just() != 0)
            goto L116234;
        row_page(0x21);
        sep_a();
        cell_poke0(cell_peek_cur());
        goto L11623C;
    L116234:
        latch(0xF0);
    L11623C:
        cell_pull_c8(0x301);
        cell_push_c8();
        cell_pull_c8(0x302);
        txt_set(0xACD);
        row_sel_cell_cur();
        cell_tick_or(cell_state(0xACE));
        cell_tick_or(cell_peek_cur());
        cell_pull_c8(0x303);
        cell_0xfc0dc();
        row_read(0xF);
        if (sel(0x202) != 0)
            continue;
        break;
    }
    return;
}
