/* FF4 source-port — interpreted module for func_80131A2C.
 * Ground truth: src/func_80131A2C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80131A2C(void)
{
    /* ability pick: 0x1BC6/0x1B8B texts, 0x43/0x45 windows,
       801224D0/80124EAC/80132178 rows; 6434(2)/4120(0x202) gates. */
    cell_cursor_dec();
    txt_draw(0x1BC6);
    battle_put43();
    txt_cell(0x1B8B);
    if (gate(2) != 0)
        return;
    page(0x43);
    cell_push_c8();
    cell_cur_save54_b();
    txt_cell(3);
    row_read(0xC0);
    if (sel(0x202) != 0)
        return;
    txt_set(0x1BC6);
    func_80132178();
    row_prep(0x20);
    cell_sink8_9(7);
    sep_a();
    cell_peek0(cell_state(0x45));
    cell_flags_cmp_pos(cell_state_of());
    if (io_go() == 0)
        goto L131B10;
    cell_sink8_9(9);
L131B10:
    cell_stamp8_9(7);
    row_prep_close();
    row_close2();
    return;
}
