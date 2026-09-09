/* FF4 source-port — interpreted module for func_80121EBC.
 * Ground truth: src/func_80121EBC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80121EBC(void)
{
    row_page(101);
    sep_b();
    func_800F7F48(cell_state(99));
    func_800F61E8();
    cell_put(29);
    sep();
    func_80121F14();
}
