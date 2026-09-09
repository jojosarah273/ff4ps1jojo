/* FF4 source-port — interpreted module for func_801120F4.
 * Ground truth: src/func_801120F4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801120F4(void)
{
    /* battle rows: 0x1700/0x7070/0x300/0x1A03 texts, 800FF024/
       8011EA5C rows; 5574(3) gate. */
    shop_view_run();
    cell_clear_pad();
    func_8011416C();
    txt_set(0x1700);
    io_poll(3);
    if (io_just() != 0)
        goto L11213C;
    shop_buy_run();
L11213C:
    wnd_open(0x7070);
    label(0x300);
    txt_set(0x1A03);
    poll_spin();
    row_sel_cell_cur();
    sep_a();
    row_open_w(0xE8);
    txt_draw(0x302);
    txt_set(0x1A03);
    row_sel_cell_cur();
    txt_draw(0x303);
    battle_wndfx_run();
    return;
}
