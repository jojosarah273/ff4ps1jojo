/* FF4 source-port — interpreted module for fn_1x4c994.
 * Ground truth: src/fn_1x4c994.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_8014B93C();

void fn_1x4c994(void)

{
  fn_1x4c96c();
  page_paint2(0xf2a0);
  latch(1);
  func_8014B93C();
  return;
}



