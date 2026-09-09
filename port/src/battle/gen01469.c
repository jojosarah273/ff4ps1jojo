/* FF4 source-port — interpreted module for func_801409E4.
 * Ground truth: src/func_801409E4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_801408E4();

void func_801409E4(void)

{
  latch(0xe0);
  func_801408E4();
  return;
}



