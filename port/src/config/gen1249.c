/* FF4 source-port — interpreted module for func_80130A74.
 * Ground truth: src/func_80130A74.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_80130A24();

void func_80130A74(void)

{
  cell_cursor_dec();
  draw_pad(5);
  func_80130A24();
  return;
}



