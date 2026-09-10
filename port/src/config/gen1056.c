/* FF4 source-port — interpreted module for fn_1x3b88c.
 * Ground truth: src/fn_1x3b88c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


void fn_1x3b88c(void)

{
  draw_pad(0xb81f);
  fn_1x3b92c();
  draw_pad(0xb89f);
  latch(4);
  wnd_open(6);
  fn_1x3b8d4();
  return;
}



