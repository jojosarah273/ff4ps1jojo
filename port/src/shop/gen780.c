/* FF4 source-port — interpreted module for func_8016C78C.
 * Ground truth: src/func_8016C78C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016C78C(void)
{
    /* shop rows: 0x2000/0x2A/0x28 cells, 0x4F window; 4264(0x1FF)
       + 3F38(3C3C(0x28)) reads. */
    cell_sink8_9(0x2000);
    cell_pos_mask(0x1FF);
    cell_put_hi9(0x2A);
    sep();
    row_prep_close();
    row_page(0x2A);
    sep_a();
    cell_poke0(cell_state(0x28));
    cell_push_c8();
    sep_a();
    row_open_w(0x10);
    cell_put(0x4F);
    return;
}
