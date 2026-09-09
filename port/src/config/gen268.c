/* FF4 source-port — interpreted module for func_8012AE00.
 * Ground truth: src/func_8012AE00.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012AE00(void)
{
    /* save/load status screen: 0x1B1F cancel gate, 0x1BC9 open dialog
       (8013441C), 0x1BC8 arrows; 0x1B12 row reads; 0x34 window with
       0xDB cell writes. */
    func_800F9200();
    func_800F9200();
    txt_set(0x1B1F);
    if (gate(2) != 0)
        goto L12AE58;
    row_close2();
    func_8013441C();
    if (io_go() == 0)
        goto L12AF70;
    goto L12AF60;
L12AE58:
    row_close2();
    io_poll(0xE2);
    if (io_just() != 0)
        goto L12AE90;
    io_poll(0xE3);
    if (io_just() == 0)
        goto L12AEE0;
L12AE90:
    func_800F9200();
    txt_set(0x1BC9);
    if (gate(2) != 0)
        goto L12AED8;
    row_close2();
    txt_set(0x1A02);
    if (gate(2) != 0)
        goto L12AFB8;
    goto L12AF60;
L12AED8:
    row_close2();
L12AEE0:
    io_poll(0x19);
    if (io_just() != 0)
        goto L12AF70;
    io_poll(0xC8);
    if (io_just() != 0)
        goto L12AF70;
    if (io_press(cell_state(0x1B1D)) == 0)
        goto L12AF70;
    if (io_press(cell_state(0x1B1E)) != 0)
        goto L12AF60;
    if (io_go() != 0)
        goto L12AF70;
L12AF60:
    row_page(0x34);
    goto L12AFD0;
L12AF70:
    io_poll(0x19);
    if (io_just() != 0)
        goto L12AFE8;
    io_poll(0xC8);
    if (io_just() != 0)
        goto L12AFE8;
    io_poll(0xEC);
    if (io_go() != 0)
        goto L12AFE8;
L12AFB8:
    latch(4);
    func_800F78C4(cell_state(0x34));
L12AFD0:
    cell_put(0xDB);
    row_close2();
    return;
L12AFE8:
    io_poll(0xFE);
    if (io_just() != 0)
        goto L12AFB8;
    txt_set(0x1BC6);
    if (gate(2) != 0)
        goto L12AFB8;
    latch(8);
    func_800F78C4(cell_state(0x34));
    cell_put(0xDB);
    row_close2();
    return;
}
