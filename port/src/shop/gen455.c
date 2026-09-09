/* FF4 source-port — interpreted module for func_8016A390.
 * Ground truth: src/func_8016A390.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8016A390(void)
{
    /* shop icon row: 9x (3B04/7A40/7A68) icon triplets. */
    row_sel2(cell_state_of());
    cell_flags_repack2();
    row_sel2(cell_state_of());
    cell_flags_repack2();
    row_sel2(cell_state_of());
    cell_flags_repack2();
    row_sel2(cell_state_of());
    cell_flags_repack2();
    row_sel2(cell_state_of());
    cell_flags_repack2();
    row_sel2(cell_state_of());
    cell_flags_repack2();
    row_sel2(cell_state_of());
    cell_flags_repack2();
    row_sel2(cell_state_of());
    cell_flags_repack2();
    row_sel2(cell_state_of());
    cell_flags_repack2();
    return;
}
