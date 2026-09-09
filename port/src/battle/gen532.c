/* FF4 source-port — interpreted module for func_8010D54C.
 * Ground truth: src/func_8010D54C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8010D54C(void)
{
    row_page(14);
    cell_put(62);
    open_row(61);
    func_800F76BC(cell_state(62));
    func_800F76E8();
    func_800F7CC8(cell_state(61));
    func_800F76BC(cell_state(62));
    func_800F76E8();
    func_800F7CC8(cell_state(61));
    func_800F76BC(cell_state(62));
    func_800F76E8();
    func_800F7CC8(cell_state(61));
    row_page(61);
    sep_a();
    cell_poke0(cell_state(12));
    cell_put(61);
}
