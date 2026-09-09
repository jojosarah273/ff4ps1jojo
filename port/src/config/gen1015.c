/* FF4 source-port — interpreted module for func_8012A868.
 * Ground truth: src/func_8012A868.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"




extern int func_8012A8A8();

void func_8012A868(void)

{
  wnd_open(0xff28);
  tail(0x5a);
  latch(8);
  cell_put(0xe1);
  func_8012A8A8();
  return;
}



