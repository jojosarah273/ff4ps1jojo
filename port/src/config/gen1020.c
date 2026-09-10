/* FF4 source-port — interpreted module for fn_1x21fdc.
 * Ground truth: src/fn_1x21fdc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x21fdc(void)

{
  latch(0xf8);
  cell_put(0x1e);
  latch(0xff);
  cell_put(0x1f);
  latch(0xfd);
  cell_put(0x20);
  fn_1x21be4();
  return;
}



