/* FF4 source-port — interpreted module for func_80123878.
 * Ground truth: src/func_80123878.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"





extern void func_8011F3F8(void);


void func_80123878(void) {
    cell_pull_c8(0x576);
    stat_sync();
    cell_pull_c8(0x578);
    row_prep(0x20);
    row_read2(0x73);
    row_prep_close();
    func_8011F3F8();
    row_page(0x5B);
    cell_pull_c8(0x56E);
    row_page(0x5D);
    cell_pull_c8(0x570);
    row_page(0x5E);
    cell_pull_c8(0x572);
    latch(0xC8);
    cell_pull_c8(0x574);;
}
