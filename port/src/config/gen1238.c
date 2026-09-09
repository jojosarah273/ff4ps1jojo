/* FF4 source-port — interpreted module for func_8013B92C.
 * Ground truth: src/func_8013B92C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_8013B8D4();

void func_8013B92C(void)

{
  latch(4);
  wnd_open(6);
  func_8013B8D4();
  return;
}



