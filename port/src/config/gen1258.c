/* FF4 source-port — interpreted module for func_801229F4.
 * Ground truth: src/func_801229F4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_80122D20();

void func_801229F4(void)

{
  wnd_open(0x40e);
  draw_pad(0x1100);
  func_80122D20();
  return;
}



