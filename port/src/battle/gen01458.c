/* FF4 source-port — interpreted module for func_8014B334.
 * Ground truth: src/func_8014B334.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800953F4();

extern int func_80141F84();
extern int func_8014B294();

void func_8014B334(void)

{
  draw_pad(0xe380);
  func_8014B294();
  func_80141F84();
  func_800953F4();
  return;
}



