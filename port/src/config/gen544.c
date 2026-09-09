/* FF4 source-port — interpreted module for func_8013E984.
 * Ground truth: src/func_8013E984.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8013E984(void)
{
    /* battle rows: 0x1802 text, 0x6 window, 8013EB2C/8013EAFC/
       8013ED14 rows; loop L13EA9C on 5958(0x440). */
    txt_set(0x1802);
    row_read(0x1F);
    func_800F9200();
    func_800F6C68();
    cell_put(6);
    func_800F6C68();
    func_8013EB2C();
    sep();
    func_800F6C68();
    row_open();
    func_8013EAFC();
    func_8013ED14();
    row_close();
    func_800F6C68();
    if (gate(2) != 0)
        goto L13EA74;
    func_8013EAFC();
    func_8013ED14();
L13EA74:
    row_close2();
    io_poll(0x10);
    if (io_just() == 0)
        goto L13EAEC;
    wnd_open_cur();
L13ea9c:
    for (;;) {
        txt_cell(0x707E);
        cell_draw_cur();
        cell_step();
        cell_step();
        poll_t(0x440);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
L13EAEC:
    return;
}
