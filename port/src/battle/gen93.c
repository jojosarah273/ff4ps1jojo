/* FF4 source-port — interpreted module for func_80105828.
 * Ground truth: src/func_80105828.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80105828(void)
{
    /* shop purchase-verify screen: reads 1704; confirm/cancel gates route
       through the buy amounts (1719-1726 detail rows); L15A78 closes the
       list window 0xA. */
    txt_set(0x709);
    func_800F9690();
    txt_set(0x1706);
    sep_a();
    row_open_w0();
    cell_put(0xC);
    txt_set(0x1707);
    sep_a();
    row_open_w0();
    cell_put(0xE);
    open_row(0xA);
    txt_set(0x1704);
    if (gate(0x202) == 0)
        return;
    io_poll(1);
    if (io_just() == 0)
        goto L5938;
    row_page(0xC);
    if (io_press(cell_state(0x1719)) == 0)
        goto L5938;
    row_page(0xE);
    if (io_press(cell_state(0x171A)) != 0)
        goto L5A78;
L5938:
    txt_set(0x1704);
    io_poll(2);
    if (io_just() != 0)
        return;
    io_poll(4);
    if (io_go() != 0)
        return;
    txt_set(0x1715);
    if (gate(0x202) != 0)
        goto L59D8;
    row_page(0xC);
    if (io_press(cell_state(0x1713)) == 0)
        goto L59D8;
    row_page(0xE);
    if (io_press(cell_state(0x1714)) != 0)
        goto L5A78;
L59D8:
    row_page(0xC);
    if (io_press(cell_state(0x171D)) == 0)
        goto L5A28;
    row_page(0xE);
    if (io_press(cell_state(0x171E)) != 0)
        goto L5A78;
L5A28:
    row_page(0xC);
    if (io_press(cell_state(0x1721)) == 0)
        goto L5A88;
    row_page(0xE);
    if (io_press(cell_state(0x1722)) == 0)
        goto L5A88;
L5A78:
    key_page(0xA);
    return;
L5A88:
    row_page(0xC);
    if (io_press(cell_state(0x1725)) == 0)
        return;
    row_page(0xE);
    if (io_press(cell_state(0x1726)) == 0)
        return;
    key_page(0xA);
    return;
}
