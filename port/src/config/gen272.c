/* FF4 source-port — interpreted module for func_8015A0F4.
 * Ground truth: src/func_8015A0F4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8015A0F4(void)
{
    page_paint2(14699);
    sep_a();
    func_800F66D8(130);
    row_read(127);
    cell_poke0(cell_state(14706));
    txt_draw(14706);
    step2();
    sep_a();
    func_800F66D8(130);
    cell_poke0(cell_state(14703));
    txt_draw(14703);
    step2();
    sep_a();
    func_800F66D8(130);
    row_read(127);
    cell_poke0(cell_state(14700));
    txt_draw(14700);
    step2();
    sep_a();
    func_800F66D8(130);
    cell_poke0(cell_state(14707));
    txt_draw(14707);
    step2();
    step2();
    func_800F66D8(130);
    func_800F78C4(cell_state(14708));
    txt_draw(14708);
    step2();
    step2();
    step2();
    func_800F66D8(130);
    txt_draw(14701);
    step2();
    func_800F66D8(130);
    func_800F78C4(cell_state(14704));
    txt_draw(14704);
    step2();
    func_800F66D8(130);
    func_800F78C4(cell_state(14705));
    txt_draw(14705);
}
