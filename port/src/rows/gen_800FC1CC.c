/* FF4 source-port — interpreted module for battle_rows_x3f_x212c_x79_windows.
 * Ground truth: src/battle_rows_x3f_x212c_x79_windows.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x3f_x212c_x79_windows(void)
{
    /* battle rows: 0x3F/0x212C/0x79 windows, 0x2106/0xC6 texts,
       800FD37C/800FC2AC rows; loop L8FC200 on 5574(0x2A). */
    latch(0x3F);
    wnd_fx_pads();
    latch(3);
    txt_draw(0x212C);
    open_row(0x79);
L8fc200:
    for (;;) {
        wnd_fx_7d_b();
        row_page(0x79);
        cell_tick_half();
        cell_cur_save54();
        txt_draw(0x2106);
        key_page(0x79);
        key_page(0x79);
        row_page(0x79);
        io_poll(0x2A);
        if (io_just() == 0)
            continue;
        break;
    }
    row_page(0xC6);
    if (gate(0x202) != 0)
        goto L8FC294;
    func_800FD37C();
L8FC294:
    func_800FC2AC();
    return;
}
