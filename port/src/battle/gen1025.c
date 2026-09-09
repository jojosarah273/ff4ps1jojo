/* FF4 source-port — interpreted module for func_8011EDF4.
 * Ground truth: src/func_8011EDF4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern void func_8016EA1C(void);



void func_8011EDF4(void) {
    cell_cursor_dec();
    func_8016EA1C();
    latch(0);
    stat_sync();
    row_close2();;
}
