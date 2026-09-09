/* FF4 source-port — interpreted module for func_8016D730.
 * Ground truth: src/func_8016D730.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F63BC();
extern int func_800F654C();
extern int func_800F82EC();

void func_8016D730(void)

{
  func_800F82EC(0x3c);
  latch(0xff);
  func_800F82EC(0x39);
  step2();
  return;
}



