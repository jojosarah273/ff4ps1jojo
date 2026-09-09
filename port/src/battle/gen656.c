/* FF4 source-port — interpreted module for func_801034E0.
 * Ground truth: src/func_801034E0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801034E0(void)
{
    /* shop rows (B8 twin of 80103310): 0x7A/0xB8 windows,
       80102E78/8017559C rows. */
    open_row(0x7A);
    open_row(0xB8);
L1034F8:
    for (;;) {
        func_80102E78();
        row_page(0x79);
        io_poll(0x20);
        if (io_go() != 0)
            goto L103540;
        cell_tick_half();
        txt_draw(0x6FD);
        key_page(0x79);
    }
L103540:
    key_page(0xB8);
    row_page(0xB8);
    sep_a();
    row_open_w(0x10);
    cell_put(0xAD);
    row_page(0xB8);
    func_8017559C();
    key_page(0x79);
    row_page(0x79);
    io_poll(0x30);
    if (io_just() == 0)
        goto L1034F8;
    return;
}
