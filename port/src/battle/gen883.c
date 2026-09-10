/* FF4 source-port — interpreted module for battle_rows_x26_x2b_windows_row_ga.
 * Ground truth: src/battle_rows_x26_x2b_windows_row_ga.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void battle_rows_x26_x2b_windows_row_ga(void)
{
    /* battle rows: 0x26/0x2B windows, 80072720 row; gates 6434/
       60A8/6434(0x80) route the 5480/5410 tails. */
    cell_push_c8();
    if (gate_cur() != 0)
        goto L14906C;
    cell_put(0x26);
    func_80072720();
    row_page(0x2B);
    cell_set50_from40();
    if (cell_0xf60a8() != 0)
        goto L149094;
L14905C:
    sep_b();
    return;
L14906C:
    cell_put(0x26);
    func_80072720();
    row_page(0x2B);
    if (gate(0x80) != 0)
        goto L14905C;
L149094:
    sep_a();
    return;
}
