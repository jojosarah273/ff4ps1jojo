/* FF4 source-port — interpreted module for func_8016C78C.
 * Ground truth: src/func_8016C78C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016C78C(void)
{
    /* shop rows: 0x2000/0x2A/0x28 cells, 0x4F window; 4264(0x1FF)
       + 3F38(3C3C(0x28)) reads. */
    func_800F6BE0(0x2000);
    func_800F4264(0x1FF);
    func_800F8274(0x2A);
    sep();
    row_prep_close();
    row_page(0x2A);
    sep_a();
    cell_poke0(cell_state(0x28));
    func_800F6C68();
    sep_a();
    row_open_w(0x10);
    cell_put(0x4F);
    return;
}
