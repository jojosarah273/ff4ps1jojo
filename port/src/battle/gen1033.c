/* FF4 source-port — interpreted module for fn_1x0e050.
 * Ground truth: src/fn_1x0e050.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x0e050(void)

{
  latch(0x80);
  txt_draw(0x2100);
  latch(0);
  txt_draw(0x4200);
  latch(0xff);
  txt_draw(0x2140);
  fn_1x0e0d0();
  battle_wndfx_run();
  return;
}



