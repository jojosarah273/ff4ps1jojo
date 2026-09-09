/* FF4 source-port — interpreted module for func_801280D4.
 * Ground truth: src/func_801280D4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801280D4(void)
{
    /* status row: 0x30/0xC1/0x1D/0x1E/0x1A3C/0x5A windows,
       8012807C/801241B8/801224D0/80125130 rows; loop L1281AC on
       5DA0(0x5A)/5B8C(0x202). */
    latch(0x30);
    cell_put(0xC1);
    func_8012807C();
    func_801241B8();
    sep();
    cell_put(0x1D);
    sep();
    cell_put(0x1E);
    txt_set(0x1A3C);
    row_sel_cell_cur();
    func_801224D0();
    row_prep(0x20);
    cell_put_hi9(0x1F);
    row_prep_close();
    latch(5);
    cell_put(0x5A);
L1281ac:
    for (;;) {
        func_80125130();
        row_prep(0x20);
        row_sync2(0x18);
        sep_a();
        cell_peek0(cell_state(0x1F));
        cell_put_hi9(0x1F);
        row_prep_close();
        key_page(0x1D);
        poll_pair(0x5A);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    return;
}
