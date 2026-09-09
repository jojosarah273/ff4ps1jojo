/* FF4 source-port — interpreted module for func_80126D48.
 * Ground truth: src/func_80126D48.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80126D48(void)
{
    /* rows: 0x48 window, 80132178 row; loop L126D58 (4120(0x202)
       gate), closes on 0xE7/0x1B3E/0x1B2A texts. */
    open_row(0x48);
L126d58:
    for (;;) {
        row_page(0x48);
        func_80132178();
        txt_cell_cur();
        row_read(0x3F);
        if (sel(0x202) != 0)
            goto L126DB0;
        key_page(0x48);
        row_page(0x48);
        io_poll(5);
        if (io_just() == 0)
            continue;
        break;
    }
L126DB0:
    row_page(0x48);
    cell_put(0xE7);
    txt_draw(0x1B3E);
    txt_draw(0x1B2A);
    wnd_open_cur();
    label(0x1BA5);
    txt_set(0x16A9);
    func_800F63F8();
    cell_put(0x1C);
    return;
}
