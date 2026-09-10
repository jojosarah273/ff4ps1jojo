/* FF4 source-port — interpreted module for party_formation_screen_xd5_xd7_row.
 * Ground truth: src/party_formation_screen_xd5_xd7_row.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void party_formation_screen_xd5_xd7_row(void)
{
    /* party-formation screen: 0xD5/0xD7 rows, 0x1B9D/0x1B9F/0x1B9C
       texts, 8012E264/8012E7CC/8012E33C/8012E700/801255C0 rows;
       loops L12E5C0 (5DA0(0xD5)/5C64(0x202)) and L12E620 (5D24/5B8C). */
    fn_1x2e264();
    wnd_open(8);
L12e5c0:
    for (;;) {
        poll_pair(0xD5);
        poll_pair(0xD5);
        poll_pair(0xD5);
        key_page(0xD7);
        key_page(0xD7);
        key_page(0xD7);
        fn_1x2e7cc();
        midrow_pad88_run();
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    formation_summary_xd9_xda_windows();
L12e620:
    for (;;) {
        row_prep(0x20);
        row_read2(0xD5);
        sep_a();
        cell_peek0(cell_state(0x1B9D));
        cell_put_hi9(0xD5);
        row_read2(0xD7);
        sep_a();
        cell_peek0(cell_state(0x1B9F));
        cell_put_hi9(0xD7);
        row_prep_close();
        fn_1x2e7cc();
        midrow_pad88_run();
        cell_dec_bank(0x1B9C);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    fn_1x2e700();
    row_page(0xD9);
    cell_put(0x1D);
    fn_1x255c0();
    row_page(0xDA);
    cell_put(0x1D);
    fn_1x255c0();
    midrow_pad88_run();
    fn_1x26830();
    return;
}
