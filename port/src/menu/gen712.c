/* FF4 source-port — interpreted module for func_800FD85C.
 * Ground truth: src/func_800FD85C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FD85C(void)
{
    /* shop rows: 0x82/0x79/0x80 windows, 0x2100 text; loop L8FD87C
       on 4370(0x82)/4120(0x202). */
    cell_put(0x82);
    open_row(0x79);
    open_row(0x80);
L8fd87c:
    for (;;) {
        func_800FE7B0();
        row_page(0x80);
        /* a0/v1 gate -> L8FD8AC */
        txt_draw(0x2100);
    L8FD8AC:
        key_page(0x79);
        row_page(0x79);
        func_800F4370(0x82);
        if (sel(0x202) != 0)
            continue;
        key_page(0x80);
        row_page(0x80);
        io_poll(0x10);
        if (io_just() == 0)
            continue;
        poll_pair(0x80);
        return;
    }
}
