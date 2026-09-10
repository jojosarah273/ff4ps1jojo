/* FF4 source-port — interpreted module for fn_1x0f1d4.
 * Ground truth: src/fn_1x0f1d4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


void fn_1x0f1d4(void)

{
  wnd_open(0);
  label(0x172c);
  latch(6);
  txt_draw(0x1704);
  latch(3);
  cell_put(0xac);
  open_row(0xe1);
  page_open(0x1725);
  label(0x1706);
  txt_set(0x1727);
  shop_main_xca_window_x1700_gate_pi();
  fn_1x035b0();
  battle_wndfx_run();
  return;
}



