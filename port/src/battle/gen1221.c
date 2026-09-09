/* FF4 source-port — interpreted module for func_8014BB3C.
 * Ground truth: src/func_8014BB3C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_8014B914();

void func_8014BB3C(void)

{
  latch(3);
  txt_draw(0xf2d0);
  func_8014B914();
  return;
}



