/* FF4 source-port — interpreted module for func_8016E668.
 * Ground truth: src/func_8016E668.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016E668(void)
{
    /* battle stat overlay: 0xA9/0xAB/0xB5/0xB7/0xB1/0xB3 windows,
       0x3591/0x3593 titles; 7B40/7B7C row pair draws + 7FCC/3F94(3C3C)
       value cells; loops L16E688/L16E6F0. */
    page(0xAB);
    row_open();
    wnd_open(0xF);
L16e688:
    for (;;) {
        func_800F902C(0xA9);
        cell_set50_from54();
        if (poll_go_cur() != 0)
            continue;
        break;
    }
    row_close();
    tail(0xAD);
    page_open(0x3591);
    tail(0xA9);
    txt_set(0x3593);
    cell_put(0xAB);
    row_prep(0x20);
    sep_a();
    wnd_open(0x20);
L16e6f0:
    for (;;) {
        func_800F7B40(cell_state(0xA9));
        func_800F7B7C();
        func_800F7B40(cell_state(0xAB));
        func_800F7B7C();
        func_800F7B40(cell_state(0xB5));
        sep_b();
        row_read2(0xB5);
        func_800F7FCC(cell_state(0xAD));
        cell_put_hi9(0xB5);
        row_read2(0xB7);
        func_800F7FCC(cell_state(0xAF));
        cell_put_hi9(0xB7);
        if (io_go() != 0)
            goto L16E7E8;
        row_read2(0xB5);
        cell_peek0(cell_state(0xAD));
        cell_put_hi9(0xB5);
        row_read2(0xB7);
        cell_peek0(cell_state(0xAF));
        cell_put_hi9(0xB7);
        sep_a();
    L16E7E8:
        func_800F7B40(cell_state(0xB1));
        func_800F7B7C();
        func_800F7B40(cell_state(0xB3));
        func_800F7B7C();
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_read2(0xB1);
    cell_put_hi9(0xAD);
    row_read2(0xB3);
    cell_put_hi9(0xAF);
    sep();
    row_prep_close();
    return;
}
