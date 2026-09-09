/* FF4 source-port — interpreted module for func_8011BCD8.
 * Ground truth: src/func_8011BCD8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011BCD8(void)
{
    draw_pad(0);
    row_info(61);
    row_page(64);
    sep_a();
    row_open_w(8);
    cell_put(64);
    cell_put(68);
    open_row(67);
    func_800F76BC(cell_state(68));
    func_800F76E8();
    func_800F7CC8(cell_state(67));
    func_800F76BC(cell_state(68));
    func_800F76E8();
    func_800F7CC8(cell_state(67));
    page(67);
}
