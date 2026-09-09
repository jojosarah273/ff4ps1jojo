/* FF4 source-port — interpreted module for func_80131C50.
 * Ground truth: src/func_80131C50.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80131C50(void)
{
    /* ability rows: 0x1BC9/0x1B93 texts, 0xE8/0x43 windows,
       80124EAC row; 6BE0(0xB)/87DC(0xB) cells; gate 6434(0x202). */
    txt_set(0x1BC9);
    if (gate(0x202) != 0)
        return;
    row_page(0xE8);
    func_80124EAC();
    txt_set(0x1B93);
    cell_put(0x43);
    row_prep(0x20);
    func_800F6BE0(0xB);
    sep_a();
    cell_peek0(cell_state(0x43));
    func_800F87DC(0xB);
    row_prep_close();
    return;
}
