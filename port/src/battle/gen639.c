/* FF4 source-port — interpreted module for func_8014B294.
 * Ground truth: src/func_8014B294.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800723F0();
extern int func_8007411C();




void func_8014B294(void)

{
  wnd_open(4);
  tail(0);
  latch(0x1c);
  wnd_open(0xdbe6);
  func_8007411C();
  wnd_open(0x80);
  tail(0);
  latch(0x7e);
  wnd_open(0xdbe6);
  draw_pad(0x600);
  func_800723F0();
  wnd_open(0x80);
  tail(0);
  latch(0x7e);
  wnd_open(0xdc26);
  draw_pad(0x700);
  func_800723F0();
  return;
}



