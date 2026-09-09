/* FF4 source-port — interpreted module for func_8016A080.
 * Ground truth: src/func_8016A080.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"




extern int func_8016A0C8();

void func_8016A080(void)

{
  wnd_open(0x32);
  tail(0);
  wnd_open(0xd300);
  draw_pad(0x4000);
  latch(0x13);
  func_8016A0C8();
  return;
}



