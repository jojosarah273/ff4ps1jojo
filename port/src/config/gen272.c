/* FF4 source-port — interpreted module for fn_1x5a0f4.
 * Ground truth: src/fn_1x5a0f4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void fn_1x5a0f4(void)
{
    page_paint2(14699);
    sep_a();
    cell_push_c8_sel(130);
    row_read(127);
    cell_poke0(cell_state(14706));
    txt_draw(14706);
    step2();
    sep_a();
    cell_push_c8_sel(130);
    cell_poke0(cell_state(14703));
    txt_draw(14703);
    step2();
    sep_a();
    cell_push_c8_sel(130);
    row_read(127);
    cell_poke0(cell_state(14700));
    txt_draw(14700);
    step2();
    sep_a();
    cell_push_c8_sel(130);
    cell_poke0(cell_state(14707));
    txt_draw(14707);
    step2();
    step2();
    cell_push_c8_sel(130);
    cell_tick_or(cell_state(14708));
    txt_draw(14708);
    step2();
    step2();
    step2();
    cell_push_c8_sel(130);
    txt_draw(14701);
    step2();
    cell_push_c8_sel(130);
    cell_tick_or(cell_state(14704));
    txt_draw(14704);
    step2();
    cell_push_c8_sel(130);
    cell_tick_or(cell_state(14705));
    txt_draw(14705);
}
