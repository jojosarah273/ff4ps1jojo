/* FF4 source-port — interpreted module for func_8012E5A8.
 * Ground truth: src/func_8012E5A8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012E5A8(void)
{
    /* party-formation screen: 0xD5/0xD7 rows, 0x1B9D/0x1B9F/0x1B9C
       texts, 8012E264/8012E7CC/8012E33C/8012E700/801255C0 rows;
       loops L12E5C0 (5DA0(0xD5)/5C64(0x202)) and L12E620 (5D24/5B8C). */
    func_8012E264();
    wnd_open(8);
L12e5c0:
    for (;;) {
        poll_pair(0xD5);
        poll_pair(0xD5);
        poll_pair(0xD5);
        key_page(0xD7);
        key_page(0xD7);
        key_page(0xD7);
        func_8012E7CC();
        midrow_pad88_run();
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    func_8012E33C();
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
        func_8012E7CC();
        midrow_pad88_run();
        cell_dec_bank(0x1B9C);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    func_8012E700();
    row_page(0xD9);
    cell_put(0x1D);
    func_801255C0();
    row_page(0xDA);
    cell_put(0x1D);
    func_801255C0();
    midrow_pad88_run();
    func_80126830();
    return;
}
