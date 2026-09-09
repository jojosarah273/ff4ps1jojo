/* FF4 source-port — interpreted module for func_801376F0.
 * Ground truth: src/func_801376F0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801376F0(void)
{
    /* ability page: 0x1B7A/0x1B7C gates, 0x76/0x75/0x7A/0x79/0x73/0x77
       windows, 80124D08/801223A4 rows; loop L137790 with
       3F94(3C3C) cells. */
    cell_cursor_dec();
    txt_set(0x1B7A);
    if (gate(0x202) != 0)
        goto L137730;
    row_close2();
    func_80124D08();
    return;
L137730:
    row_close2();
    open_row(0x76);
    cell_put(0x75);
    open_row(0x7A);
    cell_put(0x79);
    tail(0x73);
    tail(0x77);
    txt_set(0x1B7C);
    poll_spin();
    cell_put(0x63);
    open_row(0x64);
    row_prep(0x20);
L137790:
    for (;;) {
        row_read2(0x73);
        sep_a();
        cell_peek0(cell_state(0x77));
        cell_put_hi9(0x73);
        row_read2(0x75);
        cell_peek0(cell_state(0x79));
        cell_put_hi9(0x75);
        func_800F5DD4(0x63);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    row_prep_close();
    row_page(0x75);
    io_poll(0x98);
    if (io_go() != 0)
        goto L137830;
    page(0x73);
    func_80124D08();
    return;
L137830:
    page(0x75);
    poll_t_cur();
    if (io_go() != 0)
        goto L137858;
    func_80124D08();
L137858:
    draw_pad_cur();
    func_801223A4();
    page_open(0x1A80);
    latch(1);
    cell_draw(0x1A78);
    return;
}
