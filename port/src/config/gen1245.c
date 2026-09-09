/* FF4 source-port — interpreted module for func_80131F68.
 * Ground truth: src/func_80131F68.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_80131F98();

void func_80131F68(void)

{
  latch(8);
  draw_pad(3);
  func_80131F98();
  return;
}



