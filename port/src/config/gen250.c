/* FF4 source-port — interpreted module for func_801287B8.
 * Ground truth: src/func_801287B8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801287B8(void)
{
    /* config/save screen: 0x4B/0x48/0x49 windows, 80120070 config
       dispatcher, 8012833C save-check; L128954 gate loop (6BE0/4264/
       55C0), then the 80128AD4 stat blocks, 80127538 cursor row. */
    func_800F9200();
    cell_put(0x4B);
    row_sel_cell_cur();
    cell_put(0x48);
    open_row(0x49);
    wnd_open_cur();
    row_page(0x4B);
    func_80120070();
    row_page(0x4B);
    if (gate(0x202) != 0)
        goto L12882C;
    draw_pad_cur();
    row_info(0x29);
L12882C:
    draw_pad_cur();
    func_8011EF30();
    draw_pad_cur();
    wnd_open(0x82);
    func_8011F8D4();
    row_page(0x4B);
    sep_a();
    row_open_w(0x81);
    cell_fmt2(0x29);
    func_800F8960(0xC2);
    func_800F9200();
    latch(0x7F);
    func_800F8960(0xC4);
    latch(0xFF);
    func_800F8960(0xC6);
    func_800F8960(0xC8);
    row_close2();
    row_open2();
    latch(0x70);
    func_800F9200();
    row_pad();
    row_page(0x4B);
    func_8012833C();
    if (io_go() == 0)
        goto L128A98;
    row_prep(0x20);
    row_read2(0x48);
    stat_sync();
    row_open();
    row_open();
L128954:
    for (;;) {
        func_800F6BE0();
        func_800F4264(0x3F);
        func_800F55C0(1);
        if (io_just() != 0)
            goto L1289D4;
        func_800F55C0(0xB);
        if (io_just() != 0)
            goto L1289D4;
        sep_a();
        func_800F4064(0x40);
    }
L1289D4:
    func_800F6BE0(7);
    draw_pad(0x14A);
    func_80128AD4();
    func_800F6BE0(9);
    draw_pad(0x154);
    func_80128AD4();
    row_close();
    row_read2(0x29);
    sep_a();
    func_800F4064(0xCC);
    row_close();
    func_800F6BE0(0x6A5);
    func_800F922C();
    row_prep_close();
    txt_cell(0x6A4);
    row_close();
    func_80127538();
    row_pad();
    cell_fmt2(0x29);
    latch(0xC7);
    func_800F8960(0x152);
    goto L128AB4;
L128A98:
    draw_pad_cur();
    func_8011FBA4();
    row_pad();
L128AB4:
    row_close2();
    func_800F61E8();
    return;
}
