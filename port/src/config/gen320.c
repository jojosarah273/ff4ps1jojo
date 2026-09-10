/* FF4 source-port — interpreted module for party_stat_block_x1b9a_gate_main_p.
 * Ground truth: src/party_stat_block_x1b9a_gate_main_p.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void party_stat_block_x1b9a_gate_main_p(void)
{
    /* party-stat block: 0x1B9A gate; main path renders the 0x88/0x4E
       windows and the L128628 row loop (801266C8 + 5DD4 cells) with the
       80128750/8016EA7C/80126590 variants; exit 8011F884/5C64 latch. */
    txt_set(0x1B9A);
    if (gate(2) != 0)
        goto L1285D8;
    fn_1x28750();
    shop_row_kick_f0();
    fn_1x26590();
    return;
L1285D8:
    page_paint2(0x1B9A);
    sep();
    cell_put(0x88);
    wnd_open_cur();
    tail(0x93);
    tail(0x99);
    tail(0x9F);
    latch(3);
    cell_put(0x4E);
    draw_pad(0x30);
L128628:
    for (;;) {
        fn_1x266c8();
        row_prep(0x20);
        cell_dec_cell(0x93);
        cell_dec_cell(0x99);
        cell_dec_cell(0x99);
        cell_dec_cell(0x9F);
        cell_dec_cell(0x9F);
        cell_dec_cell(0x9F);
        row_prep_close();
        poll_pair(0x4E);
        if (poll_go(0x202) != 0)
            goto L1286A0;
        latch(3);
        cell_put(0x4E);
        key_page(0x88);
    L1286A0:
        midrow_degen();
        row_page_cur();
        row_read(0x80);
        if (sel(0x202) != 0)
            goto L1286E8;
        row_page(1);
        row_read(0xC);
        if (sel(2) != 0)
            goto L128718;
    L1286E8:
        fn_1x28750();
        latch(3);
        cell_put(0x4E);
        latch(0xF);
        cell_put(0x88);
        draw_pad(2);
    L128718:
        poll_pair_cur();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    latch(0xF);
    cell_put(0x88);
    return;
}
