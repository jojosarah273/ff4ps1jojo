/* FF4 source-port — interpreted module for func_8012E7CC.
 * Ground truth: src/func_8012E7CC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"





extern void func_80125130(void);
void func_8012E7CC(void) {
    row_page(0xD9);
    cell_put(0x1D);
    cell_fmt2(0xD5);
    row_info(0x1F);
    open_row(0x1E);
    func_80125130();
    row_page(0xDA);
    cell_put(0x1D);
    cell_fmt2(0xD7);
    row_info(0x1F);
    open_row(0x1E);
    func_80125130();;
}
