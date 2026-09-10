/* FF4 source-port — interpreted module for fn_1x1368c.
 * Ground truth: src/fn_1x1368c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x1368c(void)

{
  latch(0x70);
  txt_draw(0xad4);
  latch(0x70);
  txt_draw(0xad5);
  fn_1x1356c();
  battle_wndfx_run();
  return;
}



