/* FF4 source-port — interpreted module for midrow_prep_a.
 * Ground truth: src/midrow_prep_a.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void midrow_prep_a(void)

{
  cell_cur_save54_b();
  txt_cell(0);
  row_read(0x3f);
  cell_flags_tick2();
  return;
}



