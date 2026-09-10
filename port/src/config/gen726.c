/* FF4 source-port — interpreted module for fn_1x2e7cc.
 * Ground truth: src/fn_1x2e7cc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x2e7cc(void) {
    row_page(0xD9);
    cell_put(0x1D);
    cell_fmt2(0xD5);
    row_info(0x1F);
    open_row(0x1E);
    config_row_1d();
    row_page(0xDA);
    cell_put(0x1D);
    cell_fmt2(0xD7);
    row_info(0x1F);
    open_row(0x1E);
    config_row_1d();;
}
