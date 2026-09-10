/* FF4 source-port — interpreted module for fn_1x21f8c.
 * Ground truth: src/fn_1x21f8c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_80121A74();

void fn_1x21f8c(void)

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



