/* FF4 source-port — interpreted module for func_80163D68.
 * Ground truth: src/func_80163D68.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80163D68(void)
{
    /* options dialog: 0xE5/0x33C4/0x38ED/0x3584 texts, 80152224/
       8015240C/80153098; loop L163E1C polls 6434(0x514)/4120(0x202)
       gates; 0xDF/0xE1/0xE3/0xA9 windows. */
    latch(0xE5);
    txt_draw(0x33C4);
    page_paint2(0x38ED);
    page_paint2(0x3584);
    sep();
    latch(9);
    config_banner_96();
    cell_push_c8();
    cell_cursor_dec();
    row_read(0x7F);
    txt_draw(0x26D2);
    txt_draw(0x33C5);
    row_close2();
    if (gate_cur() != 0)
        goto L163F38;
L163e1c:
    for (;;) {
        wnd_open(5);
        latch(0xC);
        config_banner_96();
        row_info(0xA9);
        cell_push_c8_d58(0x3540);
        if (gate(0x202) != 0)
            continue;
        cell_put(0xDF);
        latch(0x80);
        cell_put(0xE1);
        options_row_run();
        page(0xE3);
        txt_cell(0x2003);
        row_read(0xC0);
        if (sel(0x202) != 0)
            continue;
        sep_b();
        row_page(0xA9);
        cell_pos_back(5);
        cell_put(0xCE);
        sep();
        option_mark_54();
        goto L163F50;
    }
L163F38:
    latch(0x80);
    cell_put(0xCE);
    latch(0xFF);
    goto L163F50;
L163F50:
    txt_draw(0x26D3);
    return;
}
