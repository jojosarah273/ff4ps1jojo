/* FF4 source-port — interpreted module for func_80131760.
 * Ground truth: src/func_80131760.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80131760(void)
{
    /* ability rows: 0x1B8B/0x16 texts, 0x43 window, 801224D0 +
       80132178 rows; gates 6434(2/0x80). */
    func_800F9200();
    func_801224D0();
    txt_cell(0x1B8B);
    if (gate(2) != 0)
        return;
    row_page(0x43);
    func_80132178();
    txt_cell(3);
    if (gate(0x80) != 0)
        return;
    row_prep(0x20);
    func_800F6BE0(9);
    func_800F87DC(7);
    row_prep_close();
    row_close2();
    return;
}
