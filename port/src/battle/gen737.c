/* FF4 source-port — interpreted module for fn_1x10f2c.
 * Ground truth: src/fn_1x10f2c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x10f2c(void)

{
  latch(6);
  txt_draw(0x1704);
  latch(3);
  txt_draw(0x1705);
  latch(0x58);
  cell_put(0x2c);
  latch(0x60);
  cell_put(0x2e);
  fn_1x11bbc();
  open_row(0x79);
  open_row(0x7a);
  open_row(0x24);
  return;
}



