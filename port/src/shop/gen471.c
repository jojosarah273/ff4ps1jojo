/* FF4 source-port — interpreted module for func_8016C4A0.
 * Ground truth: src/func_8016C4A0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016C4A0(void)
{
    /* shop memory: 0x48/0x50 windows, 0x7D27 text, 0x4B/0x4D cells,
       80176F60 row; loop L16C4DC on 5574(0x38). */
    latch(0x48);
    cell_put(0x50);
    sep();
L16c4dc:
    for (;;) {
        page_paint2(0x7D27);
        func_800F9200();
        row_open();
        func_800F6C68();
        row_info(0x4B);
        func_800F6C68();
        row_info(0x4D);
        txt_set(0x7D27);
        row_read(7);
        if (sel(2) != 0)
            goto L16C5A4;
        latch(1);
    L16C5A4:
        sep_a();
        row_open_w(0x50);
        cell_put(0x4F);
        latch(1);
        cell_put(0x51);
        func_80176F60();
        row_close();
        cell_step();
        cell_step();
        row_close2();
        func_800F61E8();
        io_poll(0x38);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}
