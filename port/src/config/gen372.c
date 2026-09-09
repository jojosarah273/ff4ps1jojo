/* FF4 source-port — interpreted module for func_8013F354.
 * Ground truth: src/func_8013F354.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013F354(void)
{
    /* battle class rows: 0x1C/0x22/0x1E windows, 3F94(3C3C) + 7FCC
       cells, 64EC(2) gates; loop L13F3BC (7B40/5C64). */
    row_open();
    row_prep(0x20);
    cell_cursor_ret2();
    func_800F8FD8(0x20);
    func_800F8FD8(0x22);
    row_read2(0x1C);
    if (cell_flags_pos0(2) != 0)
        goto L13F474;
    row_read2(0x1E);
    if (cell_flags_pos0(2) != 0)
        goto L13F474;
    wnd_open(0x10);
L13f3bc:
    for (;;) {
        cell_pair_dbl(cell_state(0x1C));
        cell_flags_overflow();
        cell_pair_dbl(cell_state(0x22));
        sep_b();
        row_read2(0x22);
        cell_pos_sub16(cell_state(0x1E));
        cell_put_hi9(0x22);
        if (io_go() != 0)
            goto L13F444;
        row_read2(0x22);
        cell_peek0(cell_state(0x1E));
        cell_put_hi9(0x22);
        sep_a();
    L13F444:
        cell_pair_dbl(cell_state(0x20));
        cell_flags_overflow();
        cell_set50_from54();
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
L13F474:
    cell_cursor_adv2();
    row_prep_close();
    row_close();
    return;
}
