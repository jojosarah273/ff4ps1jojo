/* FF4 source-port — interpreted module for fn_1x28ad4.
 * Ground truth: src/fn_1x28ad4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x28ad4(void)

{
  row_open2();
  cell_put_hi9(0x45);
  row_prep_close();
  latch(0x7e);
  cell_cursor_dec();
  row_pad();
  row_prep(0x20);
  row_read2(0x45);
  rows_x29_window_cells_x5a_x5e_wind();
  row_pad();
  return;
}



