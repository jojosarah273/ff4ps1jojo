/* FF4 source-port — interpreted module for func_800FEE34.
 * Ground truth: src/func_800FEE34.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_800FEE34(void)
{
    /* item/order sub-screen: 0x4211 text, 0xD9/0xDF/0xDA windows with
       800FE9F8/80109774/801069E0 gates; 0x7F + 0x94B8/9448 close. */
    func_800F92D8();
    row_prep(0x20);
    func_800F922C();
    row_open();
    row_sync();
    row_open2();
    row_open3();
    row_sync2_cur();
    row_prep_close();
    wnd_open(0x600);
    row_open();
    func_800F94B8();
    latch_cur();
    func_800F9200();
    row_pad();
    txt_set(0x4211);
    row_page(0xD9);
    if (gate(2) != 0)
        goto L8FEEE4;
    func_800FE9F8();
    goto L8FEF2C;
L8FEEE4:
    row_page(0xDF);
    if (gate(2) != 0)
        goto L8FEF0C;
    func_80109774();
    goto L8FEF2C;
L8FEF0C:
    row_page(0xDA);
    if (gate(2) != 0)
        goto L8FEF2C;
    func_801069E0();
L8FEF2C:
    key_page(0x7F);
    row_prep(0x20);
    func_800F94B8();
    row_pad();
    row_done();
    row_close();
    func_800F9410();
    func_800F9538();
    return;
}
