/* FF4 source-port — interpreted module for fn_1x2c74c.
 * Ground truth: src/fn_1x2c74c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x2c74c(void)

{
  row_prep(0x20);
  draw_pad(9);
  cell_push89_sel(0x60);
  sep_a();
  cell_pos_fwd(100);
  fn_1x2c794();
  return;
}



