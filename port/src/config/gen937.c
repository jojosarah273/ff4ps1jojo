/* FF4 source-port — interpreted module for func_8012C7E4.
 * Ground truth: src/func_8012C7E4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_8012C794();

void func_8012C7E4(void)

{
  row_prep(0x20);
  draw_pad(9);
  cell_push89_sel(0x60);
  sep_a();
  cell_pos_fwd(0x32);
  func_8012C794();
  return;
}



