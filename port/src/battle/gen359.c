/* FF4 source-port — interpreted module for func_80147888.
 * Ground truth: src/func_80147888.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80147888(void)
{
    /* battle item detail (twin of 801462DC): 0x47 window; 6434(0x202)
       gate routes the 4248(0x30/0x20) row picks; 801470F8 +
       960C/95A0 close. */
    row_open();
    row_sync();
    row_info();
    page_cur();
    row_page(0x47);
    sep();
    func_800F8960();
    row_page(0x47);
    func_800F6D70();
    row_read(0xC0);
    if (sel(0x202) != 0)
        goto L147A80;
    txt_set_cur();
    if (gate(0x202) != 0)
        goto L147994;
    row_open();
    row_page(0x47);
    func_800F6C68();
    row_close();
    goto L1479D0;
L147994:
    row_open();
    row_page(0x47);
    func_800F6C68();
    row_close();
L1479D0:
    cell_draw_cur();
    func_800F6D70();
    row_read(0x30);
    if (sel(2) != 0)
        goto L147A58;
    row_read(0x20);
    if (sel(2) != 0)
        goto L147A38;
    txt_cell_cur();
    cell_draw_cur();
L147A38:
    txt_cell_cur();
    row_sel_cell_cur();
    cell_draw_cur();
    goto L147A80;
L147A58:
    txt_cell_cur();
    cell_draw_cur();
    return;
L147A80:
    func_801470F8();
    row_done();
    row_close();
    return;
}
