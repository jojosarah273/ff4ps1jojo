/* FF4 source-port — interpreted module for fn_1x110cc.
 * Ground truth: src/fn_1x110cc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x110cc(void)

{
  latch(0x16);
  txt_draw(0x212c);
  latch(1);
  cell_put(0xc9);
  wnd_open(0);
  tail(0x5e);
  wnd_open(0x2e0);
  tail(0x60);
  fn_1x111c4();
  battle_wndfx_run();
  return;
}



