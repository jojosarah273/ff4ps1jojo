/* FF4 source-port — interpreted module for func_80148FC0.
 * Ground truth: src/func_80148FC0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80148FC0(void)
{
    /* battle rows: 0x26/0x2B windows, 80072720 row; gates 6434/
       60A8/6434(0x80) route the 5480/5410 tails. */
    func_800F6C68();
    if (gate_cur() != 0)
        goto L14906C;
    cell_put(0x26);
    func_80072720();
    row_page(0x2B);
    func_800F61E8();
    if (func_800F60A8() != 0)
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
