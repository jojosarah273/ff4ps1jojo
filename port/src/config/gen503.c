/* FF4 source-port — interpreted module for func_80135330.
 * Ground truth: src/func_80135330.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80135330(void)
{
    /* ability/skill screen: 0x34 window + 0xDB cell, 0x1B7C/0x1BCB
       texts; 80134948/80125934/8012B168/80120FBC/801241B8/80120F1C
       home row, then 80135298/80135574 detail rows, the L13546C loop
       (801378E0/80137938 + 6434(2) gate) and 801361A4/8012B0D8 tail. */
    row_page(0x34);
    cell_put(0xDB);
    latch_cur();
    func_80134948();
    io_poll_cur();
    if (io_just() != 0)
        goto L1353C4;
    func_80125934();
    func_8012B168();
    func_8011F684();
    func_80120FBC();
    draw_pad_cur();
    func_8011FB74();
    func_80120B6C();
    func_8011FF40();
    return;
L1353C4:
    func_801241B8();
    func_80120F1C();
    draw_pad_cur();
    func_8011EF30();
    func_80135298();
    draw_pad_cur();
    func_8011EF30();
    draw_pad_cur();
    func_8011FBA4();
    draw_pad_cur();
    func_8011EF30();
    func_80135574();
    txt_draw(0x1B7D);
    func_8011F684();
    func_80120B6C();
    func_800F8F74(0x1BCB);
L13546c:
    for (;;) {
        func_801378E0();
        func_80125934();
        txt_set(0x1B7C);
        draw_pad(0x19A);
        func_801206DC();
        func_8011F684();
        func_801264E8();
        func_8011F884();
        func_80137938();
        txt_set(0x1BCB);
        if (gate(2) != 0)
            goto L1354DC;
        func_800F8F74(0x1BCB);
        func_8013554C();
    L1354DC:
        row_page_cur();
        row_read(0x80);
        if (sel(2) != 0)
            goto L13551C;
        draw_pad(0x310);
        func_801361A4();
        func_8012B0D8();
        return;
    L13551C:
        row_page(1);
        row_read(0x80);
        if (sel(2) != 0)
            continue;
        break;
    }
    return;
}
