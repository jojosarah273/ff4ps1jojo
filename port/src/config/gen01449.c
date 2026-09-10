/* FF4 source-port — interpreted module for options_row_x39f0_text_read_v1_v0.
 * Ground truth: src/options_row_x39f0_text_read_v1_v0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void options_row_x39f0_text_read_v1_v0(void)
{
    /* options row: 0x39F0 text read; v1/v0 gate tree dispatches
       8015BB9C / 8005A424 / 8015E84C / 8015D1C8. */
    txt_set(0x352E);
    row_sel_cell_cur();
    /* v1/v0 gates -> L151CA0 / L151C74 / L151CC8 */
    options_c3c_b04_x2000_x2_gates_a0();
    return;
L151CA0:
    func_8005A424();
    return;
L151CB0:
    options_x14_x280_x2001_cells_c38_c();
    return;
L151CC0:
    options_dispatch_a234_prep_xd2_xd3();
    return;
L151CC8:
    return;
}
