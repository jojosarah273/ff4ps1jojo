/* FF4 source-port — interpreted module for options_screen_x16_x34c8_headers_x.
 * Ground truth: src/options_screen_x16_x34c8_headers_x.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_screen_x16_x34c8_headers_x(void)
{
    /* options screen: 0x16/0x34C8 headers, 0x33C6/0x33C7/0x33C4 row
       texts, 0xCE/0xD3 windows; 8015329C alternative, 801526F8/8015240C
       detail, 801531CC stat row, 80061C1C/80061C8C commits. */
    latch(0x16);
    txt_draw(0x34C8);
    latch(0x10);
    txt_draw(0x34C7);
    latch(0xF8);
    txt_draw(0x33C6);
    latch(4);
    txt_draw(0x33C7);
    row_page(0xCE);
    if (gate(0x80) != 0)
        goto L161660;
L161630:
    latch(0xD3);
    txt_draw(0x33C4);
    config_row_5329c();
    latch_cur();
    txt_draw(0x34CA);
    return;
L161660:
    txt_set(0x3881);
    if (gate(0x202) != 0)
        goto L161630;
    txt_set(0x26D2);
    txt_draw(0x3580);
    tail(0xE5);
    wnd_open_cur();
    tail(0x80);
    latch(0xF);
    cell_put(0x82);
    latch(8);
    shop_rows_xe1_xe5_xdf_windows_c_ro();
    txt_set(0x289D);
    cell_put(0xDF);
    txt_set(0x2682);
    cell_put(0xE1);
    options_row_run();
    page(0xE3);
    label(0x289C);
    func_801531CC();
    sep_a();
    cell_poke0(cell_state(0x289C));
    cell_put(0xE3);
    latch_cur();
    cell_poke0(cell_state(0x289D));
    cell_put(0xE4);
    page(0xE3);
    poll_t(0x270F);
    if (io_go() == 0)
        goto L161788;
    wnd_open(0x270F);
    tail(0xE3);
L161788:
    row_page(0xCE);
    cell_flags_scr();
    func_80061C1C();
    row_page(0xE3);
    cell_draw(0x34D4);
    row_page(0xE4);
    cell_draw(0x34D5);
    func_80061C8C();
    return;
}
