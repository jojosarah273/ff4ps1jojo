/* FF4 source-port — interpreted module for func_80131F38.
 * Ground truth: src/func_80131F38.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F7500();
extern int func_80131F98();

void func_80131F38(void)

{
  latch(0x20);
  draw_pad(3);
  func_80131F98();
  return;
}



