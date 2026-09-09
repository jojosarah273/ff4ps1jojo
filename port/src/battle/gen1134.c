/* FF4 source-port — interpreted module for func_8011EF30.
 * Ground truth: src/func_8011EF30.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011EF30(void)
{
    /* battle rows: 3C3C/939C/926C/9448 x2 + 8011F030 + 960C. */
    cell_state_of();
    row_sync();
    row_open2();
    row_pad();
    row_pad();
    func_8011F030();
    row_done();
    return;
}
