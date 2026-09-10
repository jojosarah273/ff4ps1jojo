/* FF4 source-port — interpreted module for fn_1x2c7e4.
 * Ground truth: src/fn_1x2c7e4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x2c7e4(void)

{
  row_prep(0x20);
  draw_pad(9);
  cell_push89_sel(0x60);
  sep_a();
  cell_pos_fwd(0x32);
  fn_1x2c794();
  return;
}



