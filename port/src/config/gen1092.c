/* FF4 source-port — interpreted module for func_8015E6A4.
 * Ground truth: src/func_8015E6A4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"



extern int func_8015E6DC();

void func_8015E6A4(void)

{
  page(0xa6);
  latch(0x1c);
  cell_draw(0x2051);
  func_8015E6DC();
  return;
}



