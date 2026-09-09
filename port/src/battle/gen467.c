/* FF4 source-port — interpreted module for func_8010D894.
 * Ground truth: src/func_8010D894.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010D894(void)
{
    /* battle row: 0x7/0x3D/0x3E windows, 0xFE5/0x1701 texts, 0x12E0
       gate; loop L10D96C (5A90/53D4). */
    row_sync();
    func_800F9200();
    row_read(7);
    cell_put(7);
    row_close2();
    cell_put(0x3D);
    txt_set(0xFE5);
    if (gate(0x80) != 0)
        goto L10D914;
    txt_set(0x1701);
    if (gate(2) != 0)
        goto L10D934;
L10D914:
    row_page(0x3D);
    sep_a();
    row_open_w(0x20);
    cell_put(0x3D);
L10D934:
    open_row(0x3E);
    row_page(7);
    page(0x3D);
    func_800F6C68(0x12E0);
L10d96c:
    for (;;) {
        poll_t_cur();
        if (io_just() != 0)
            goto L10D99C;
        func_800F7864();
        poll_pair_cur();
    }
L10D99C:
    func_800F7864();
    func_800F76E8();
    latch_cur();
    row_open_w0();
    row_done();
    return;
}
