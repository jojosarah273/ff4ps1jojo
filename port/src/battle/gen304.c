/* FF4 source-port — interpreted module for func_80149F20.
 * Ground truth: src/func_80149F20.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80149F20(void)
{
    /* battle item/help mix: 5574 gates (0x4D/0x5E), 80149D68 +
       80168BC4 detail, 0x34C5 gate; then the 8014FEC8 stats rows with
       the L149FF0 poll chain and 8014A154/80148CAC commits. */
    txt_draw_cur();
    txt_draw_cur();
    cell_dec_bank();
    cell_clear_bank();
    cell_clear_bank();
    io_poll(0x4D);
    if (io_go() == 0)
        goto L149FF0;
    io_poll(0x5E);
    if (io_go() != 0)
        goto L149FF0;
    cell_cursor_dec();
    func_80149D68();
    func_80168BC4();
    latch(1);
    txt_draw_cur();
    func_8016752C();
    func_8014C57C();
    txt_set(0x34C5);
    if (gate(0x202) != 0)
        goto L149FE8;
    row_close2();
    func_800953F4();
    return;
L149FE8:
    row_close2();
L149FF0:
    poll_spin();
    row_prep(0x20);
    sep();
    row_prep_close();
    cell_push_c8();
    row_open();
    wnd_open(0xF);
    txt_draw_cur();
    func_800760D0();
    row_close();
    cell_push_c8();
    row_open();
    func_8014FEC8();
    txt_set(0x34C4);
    txt_draw_cur();
    row_close();
    cell_push_c8();
    io_poll(0xFF);
    if (io_just() != 0)
        goto L14A134;
    txt_draw_cur();
    latch(1);
    txt_draw_cur();
    txt_draw_cur();
    cell_push_c8();
    io_poll(0xFF);
    if (io_just() != 0)
        goto L14A134;
    row_sel_cell_cur();
    func_8014A154();
L14A134:
    cell_clear_bank();
    func_80148CAC();
    return;
}
