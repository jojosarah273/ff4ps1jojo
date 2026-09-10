/* FF4 source-port — interpreted module for fn_1x14c98.
 * Ground truth: src/fn_1x14c98.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x14c98(void)

{
  cell_clear_pad();
  page(0x2c);
  tail(0xc);
  page(0x2e);
  tail(0xe);
  latch(0x18);
  cell_put(0x91);
  latch(0x78);
  cell_put(0x8f);
  draw_pad(0x180);
  latch(0x60);
  cell_put(0x92);
  battle_rows_300();
  return;
}



