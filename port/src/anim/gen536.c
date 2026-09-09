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
    cell_sink8_9(0x1BCD);
    cell_cursor_ret2();
    cell_sink8_9(0x1BCF);
    cell_cursor_ret2();
    cell_sink8_9(0x1BD1);
    cell_cursor_ret2();
    cell_sink89(0x1BCD);
    cell_stamp8_9(0x1BCD);
    cell_sink89(0x1BCF);
    cell_stamp8_9(0x1BCF);
    cell_sink89(0x1BD1);
    cell_stamp8_9(0x1BD1);
    cell_cursor_adv2();
    cell_stamp8_9_b(0x1BD1);
    cell_cursor_adv2();
    cell_stamp8_9_b(0x1BCF);
    cell_cursor_adv2();
    cell_stamp8_9_b(0x1BCD);
    row_prep_close();
    return;
}
