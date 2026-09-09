/* FF4 source-port — interpreted module for func_80140FB8.
 * Ground truth: src/func_80140FB8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_80140EA8();

void func_80140FB8(void)

{
  func_80140EA8();
  page_paint2(0xf41a);
  return;
}



