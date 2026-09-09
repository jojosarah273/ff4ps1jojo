/* FF4 source-port — interpreted module for func_8013B88C.
 * Ground truth: src/func_8013B88C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"



extern int func_8013B8D4();
extern int func_8013B92C();

void func_8013B88C(void)

{
  draw_pad(0xb81f);
  func_8013B92C();
  draw_pad(0xb89f);
  latch(4);
  wnd_open(6);
  func_8013B8D4();
  return;
}



