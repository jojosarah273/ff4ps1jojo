/* FF4 source-port — interpreted module for func_801772E4.
 * Ground truth: src/func_801772E4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801772E4(void)
{
    /* shop item cells: 0xD9/0xDA windows, 0x1BCD/0x1BCF/0x1BD1
       texts, 801771D4 rows + 6BE0/922C + 6DE8/87DC cell pairs. */
    row_page(0xD9);
    func_801771D4();
    row_page(0xDA);
    func_801771D4();
    row_prep(0x20);
    func_800F6BE0(0x1BCD);
    func_800F922C();
    func_800F6BE0(0x1BCF);
    func_800F922C();
    func_800F6BE0(0x1BD1);
    func_800F922C();
    func_800F6DE8(0x1BCD);
    func_800F87DC(0x1BCD);
    func_800F6DE8(0x1BCF);
    func_800F87DC(0x1BCF);
    func_800F6DE8(0x1BD1);
    func_800F87DC(0x1BD1);
    func_800F9410();
    func_800F89D4(0x1BD1);
    func_800F9410();
    func_800F89D4(0x1BCF);
    func_800F9410();
    func_800F89D4(0x1BCD);
    row_prep_close();
    return;
}
