/* FF4 source-port — interpreted module for func_801240D0.
 * Ground truth: src/func_801240D0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_801240F8();

void func_801240D0(void)

{
  wnd_open(0xb600);
  func_801240F8();
  return;
}



