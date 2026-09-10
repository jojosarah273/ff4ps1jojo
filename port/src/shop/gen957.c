/* FF4 source-port — interpreted module for fn_1x6a080.
 * Ground truth: src/fn_1x6a080.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x6a080(void)

{
  wnd_open(0x32);
  tail(0);
  wnd_open(0xd300);
  draw_pad(0x4000);
  latch(0x13);
  shop_cells_x2_window_x8_gate_loops();
  return;
}



