/* FF4 source-port — interpreted module for func_80104F1C.
 * Ground truth: src/func_80104F1C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80104F1C(void)
{
    /* shop buy-row: 0x709/0x1706/0x1707 texts, 0xD2/0xC/0xE/0x3D/0xEE
       windows, 8010D54C; 6A78(0xA1) gate. */
    txt_set(0x709);
    func_800F96E0();
    row_sel_cell_cur();
    cell_cur_save54();
    func_800F6A78(0xA1);
    row_read(4);
    if (sel(2) != 0)
        goto L104F94;
    row_page(0xD2);
    io_poll(1);
    if (io_just() != 0)
        goto L104F94;
    latch_cur();
    return;
L104F94:
    row_open();
    txt_set(0x1706);
    sep_a();
    row_open_w0();
    cell_put(0xC);
    io_poll(0x20);
    if (io_go() != 0)
        goto L105078;
    txt_set(0x1707);
    sep_a();
    row_open_w0();
    cell_put(0xE);
    io_poll(0x20);
    if (io_go() != 0)
        goto L105078;
    func_8010D54C();
    page(0x3D);
    cell_push_c8();
    if (gate_cur() != 0)
        goto L105078;
    cell_put(0xEE);
    goto L105080;
L105078:
    latch_cur();
L105080:
    row_close();
    return;
}
