/* FF4 source-port — interpreted module for func_8012C74C.
 * Ground truth: src/func_8012C74C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_800F6764();


extern int func_8012C794();

void func_8012C74C(void)

{
  row_prep(0x20);
  draw_pad(9);
  func_800F6764(0x60);
  sep_a();
  cell_pos_fwd(100);
  func_8012C794();
  return;
}



