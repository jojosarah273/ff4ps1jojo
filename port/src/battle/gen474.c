/* FF4 source-port — interpreted module for func_80149BE4.
 * Ground truth: src/func_80149BE4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80149BE4(void)
{
    /* battle item flow: 0x48/0x4/0x49 windows, 0x38E2/0x34C2 texts,
       8014FE84/800760D0/8014B248/8014DA2C/80148CAC rows. */
    cell_cursor_dec();
    txt_draw_cur();
    row_close2();
    cell_cursor_dec();
    row_page(0x48);
    row_close2();
    cell_clear_bank();
    cell_cursor_dec();
    func_8014FE84();
    row_close2();
    cell_cursor_dec();
    sep_a();
    row_open_w(6);
    wnd_open(0xF);
    txt_draw_cur();
    func_800760D0();
    open_row_cur();
    func_8014B248();
    open_row(2);
    row_close2();
    cell_put(4);
    txt_set(0x38E2);
    cell_cursor_dec();
    cell_clear_bank(0x38E2);
    txt_set(0x34C2);
    txt_draw_cur();
    row_page(4);
    func_8014DA2C();
    row_close2();
    txt_draw(0x38E2);
    func_80148CAC();
    return;
}
