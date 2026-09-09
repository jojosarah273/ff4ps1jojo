/* FF4 source-port — interpreted module for func_80104E14.
 * Ground truth: src/func_80104E14.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80104E14(void)
{
    /* shop sell rows: 0xB1/0xA1/0xD2 windows, 0x6A1/0x709 texts,
       80104F1C; 6434(2)/4120(2) gates. */
    row_page(0xB1);
    if (gate(2) == 0)
        goto L104EF4;
    func_80104F1C();
    io_poll_cur();
    if (io_just() == 0)
        goto L104F04;
    txt_set(0x709);
    row_sel_cell_cur();
    cell_cur_save58();
    row_page(0xA1);
    row_read(4);
    if (sel(2) != 0)
        goto L104EBC;
    cell_push_c8_d58(0x6A1);
    row_read(3);
    cell_tick_and(0xD2);
    if (sel(2) != 0)
        goto L104ED4;
    goto L104EF4;
L104EBC:
    cell_push_c8_d58(0x6A1);
    cell_tick_and(0xA);
    goto L104EE4;
L104ED4:
    cell_push_c8_d58(0x6A1);
    row_read(4);
L104EE4:
    if (sel(2) != 0)
        goto L104F04;
L104EF4:
    latch_cur();
    return;
L104F04:
    latch(1);
    return;
}
