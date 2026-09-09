/* FF4 source-port — interpreted module for func_8014C994.
 * Ground truth: src/func_8014C994.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F6240();
extern int func_800F654C();
extern int func_8014B93C();
extern int func_8014C96C();

void func_8014C994(void)

{
  func_8014C96C();
  page_paint2(0xf2a0);
  latch(1);
  func_8014B93C();
  return;
}



