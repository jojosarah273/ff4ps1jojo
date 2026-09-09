/* FF4 source-port — interpreted module for func_80175E88.
 * Ground truth: src/func_80175E88.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80175E88(void)
{
    txt_set(5891);
    open_row(74);
    func_800F7864();
    func_800F76E8();
    func_800F7CC8(cell_state(74));
    func_800F7864();
    func_800F76E8();
    func_800F7CC8(cell_state(74));
    cell_put(75);
    page(74);
}
