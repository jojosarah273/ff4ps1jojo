/* FF4 source-port — interpreted module for func_801208C8.
 * Ground truth: src/func_801208C8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801208C8(void)
{
    /* rows: 0x29 window cells, 0x5A-0x5E windows with 8960 writes,
       8011F3F8 row. */
    row_open();
    row_prep_close();
    row_sync();
    func_8011F3F8();
    row_prep(0x20);
    func_800F9410();
    sep_a();
    cell_peek0(cell_state(0x29));
    row_prep_close();
    row_page(0x5A);
    func_800F8960();
    row_page(0x5B);
    func_800F8960(2);
    row_page(0x5D);
    func_800F8960(4);
    row_page(0x5E);
    func_800F8960(6);
    row_close();
    return;
}
