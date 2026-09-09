/* FF4 source-port — interpreted module for func_80137938.
 * Ground truth: src/func_80137938.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80137938(void)
{
    /* ability page: four 4120(2)-gated blocks; each reads 0x1B7A/0x1B7C
       and writes 0x1BCB through 6240 after the 537D/53C0 key checks. */
    row_page_cur();
    row_read(0x40);
    if (sel(2) != 0)
        goto L1379C0;
    txt_set(0x1B7A);
    if (gate(2) != 0)
        goto L1379C0;
    txt_set(0x1B7C);
    sep_a();
    row_open_w(0xA);
    io_poll(0x64);
    if (io_go() == 0)
        goto L1379B0;
    latch(0xA);
L1379B0:
    txt_draw(0x1B7C);
    page_paint2(0x1BCB);
L1379C0:
    row_page(1);
    row_read(8);
    if (sel(2) != 0)
        goto L137A38;
    txt_set(0x1B7A);
    if (gate(2) != 0)
        goto L137A38;
    txt_set(0x1B7C);
    cell_set50_from40();
    io_poll(0x64);
    if (io_go() == 0)
        goto L137A28;
    latch(2);
L137A28:
    txt_draw(0x1B7C);
    page_paint2(0x1BCB);
L137A38:
    row_page(1);
    row_read(4);
    if (sel(2) != 0)
        goto L137AB0;
    txt_set(0x1B7A);
    if (gate(2) != 0)
        goto L137AB0;
    txt_set(0x1B7C);
    poll_spin();
    io_poll(2);
    if (io_go() != 0)
        goto L137AA0;
    latch(0x63);
L137AA0:
    txt_draw(0x1B7C);
    page_paint2(0x1BCB);
L137AB0:
    row_page(1);
    row_read(3);
    if (sel(2) != 0)
        return;
    txt_set(0x1B7A);
    row_read(1);
    txt_draw(0x1B7A);
    page_paint2(0x1BCB);
    return;
}
