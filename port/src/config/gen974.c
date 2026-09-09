/* FF4 source-port — interpreted module for func_8012FF9C.
 * Ground truth: src/func_8012FF9C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8012FF9C(void)
{
    /* ability rows: 0x1B83/0x1B84 texts, 0x46/0x45 windows. */
    txt_set(0x1B83);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    row_open_w(0x56);
    cell_put(0x46);
    txt_set(0x1B84);
    row_prep_close();
    row_prep_cur();
    cell_put(0x45);
    return;
}
