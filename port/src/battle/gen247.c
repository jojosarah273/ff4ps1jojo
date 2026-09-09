/* FF4 source-port — interpreted module for func_801490CC.
 * Ground truth: src/func_801490CC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801490CC(void)
{
    /* battle info-dialog: two identical confirm blocks (54D4/53C0 ->
       option select vs 6240 tail), then 0x26/0x28/0x2A detail rows and
       8007262C commit. */
    cell_clear_bank();
    page_open_cur();
    label_cur();
    cell_clear_bank();
    cell_clear_bank();
    cell_clear_bank();
    cell_clear_bank();
    cell_clear_bank();
    txt_set_cur();
    io_press(cell_state_of());
    if (io_just() != 0)
        goto L149204;
    if (io_go() == 0)
        goto L1491AC;
    cell_dec_bank();
    txt_set_cur();
    sep_b();
    cell_tick_sub(cell_state_of());
    txt_draw_cur();
    cell_tick_half();
    sep_a();
    cell_poke0(cell_state_of());
    txt_draw_cur();
    goto L149204;
L1491AC:
    page_paint2_cur();
    txt_set_cur();
    sep_b();
    cell_tick_sub(cell_state_of());
    txt_draw_cur();
    cell_tick_half();
    sep_a();
    cell_poke0(cell_state_of());
    txt_draw_cur();
L149204:
    txt_set_cur();
    io_press(cell_state_of());
    if (io_just() != 0)
        goto L1492F4;
    if (io_go() == 0)
        goto L14929C;
    cell_dec_bank();
    txt_set_cur();
    sep_b();
    cell_tick_sub(cell_state_of());
    txt_draw_cur();
    cell_tick_half();
    sep_a();
    cell_poke0(cell_state_of());
    txt_draw_cur();
    goto L1492F4;
L14929C:
    page_paint2_cur();
    txt_set_cur();
    sep_b();
    cell_tick_sub(cell_state_of());
    txt_draw_cur();
    cell_tick_half();
    sep_a();
    cell_poke0(cell_state_of());
    txt_draw_cur();
L1492F4:
    txt_set(0x26);
    tail_cur();
    txt_set(0x28);
    tail_cur();
    func_8007262C();
    row_page(0x2A);
    cell_set50_from40();
    txt_draw_cur();
    return;
}
