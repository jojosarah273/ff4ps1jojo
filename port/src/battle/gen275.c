/* FF4 source-port — interpreted module for func_801172DC.
 * Ground truth: src/func_801172DC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801172DC(void)
{
    /* battle item pick: 5574 key ladders on 53C0/53D4 route the item
       rows (0x4/0x5/0x6/0x7 windows), 0x1705/0x1709 texts, 0x1804 save
       row; 8010543C/80104934 sub-screens; exits via the 0x3E/0x40 rows. */
    io_poll(0xC4);
    if (io_go() != 0)
        goto L117394;
    sep_b();
    func_800F8058(0xC0);
    row_sel_cell_cur();
    cell_put(4);
    cell_put(5);
    goto L117544;
L117394:
    open_row(4);
    open_row(5);
    io_poll(0xC8);
    if (io_go() != 0)
        goto L1173DC;
    sep_b();
    func_800F8058(0xC4);
    txt_draw(0x1705);
    goto L117544;
L1173DC:
    io_poll(0xC8);
    if (io_just() == 0)
        goto L11740C;
    latch(1);
    cell_put(0xD3);
    goto L117544;
L11740C:
    io_poll(0xC9);
    if (io_just() == 0)
        goto L117434;
    open_row(0xD3);
    goto L117544;
L117434:
    io_poll(0xCA);
    if (io_just() != 0)
        goto L117494;
    io_poll(0xCB);
    if (io_just() != 0)
        goto L117494;
    io_poll(0xCC);
    if (io_just() != 0)
        goto L117494;
    io_poll(0xCD);
    if (io_just() == 0)
        goto L1174AC;
L117494:
    latch_cur();
    txt_draw(0x1705);
    goto L11752C;
L1174AC:
    io_poll(0xCE);
    if (io_just() == 0)
        goto L1174F4;
    row_page(0xCF);
    cell_put_cur();
    goto L11752C;
L1174F4:
    row_page(0xD8);
    if (gate(0x202) != 0)
        goto L11751C;
    latch(1);
    goto L117524;
L11751C:
    latch_cur();
L117524:
    cell_put(0xD8);
L11752C:
    open_row(0xAB);
    open_row(2);
    open_row(3);
L117544:
    open_row(0x7B);
    txt_set(0x1700);
    io_poll(3);
    if (io_just() != 0)
        goto L11757C;
    func_8010543C();
    return;
L11757C:
    func_80104934();
    return;
}
