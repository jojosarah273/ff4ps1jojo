/* FF4 source-port — interpreted module for func_80132428.
 * Ground truth: src/func_80132428.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80132428(void)
{
    row_page(232);
    func_80124EAC();
    txt_set(7059);
    cell_put(67);
    row_prep(32);
    cell_sink8_9(11);
    sep_b();
    cell_pos_sub16(cell_state(67));
    row_prep_close();
}
