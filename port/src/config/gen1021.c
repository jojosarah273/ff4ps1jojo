/* FF4 source-port — interpreted module for func_80121F8C.
 * Ground truth: src/func_80121F8C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_80121A74();

void func_80121F8C(void)

{
  latch(0xf8);
  cell_put(0x1e);
  latch(0xff);
  cell_put(0x1f);
  latch(0xfd);
  cell_put(0x20);
  func_80121A74();
  return;
}



