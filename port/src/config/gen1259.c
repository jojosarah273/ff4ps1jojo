/* FF4 source-port — interpreted module for func_801229C4.
 * Ground truth: src/func_801229C4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_80122D20();

void func_801229C4(void)

{
  wnd_open(0x18e);
  draw_pad(0x10c0);
  func_80122D20();
  return;
}



