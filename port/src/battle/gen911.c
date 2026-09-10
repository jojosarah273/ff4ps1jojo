/* FF4 source-port — interpreted module for fn_1x1107c.
 * Ground truth: src/fn_1x1107c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x1107c(void)

{
  latch(1);
  txt_draw(0x171f);
  txt_draw(0x171c);
  open_row(0xb7);
  wnd_open(0x5266);
  label(0x171d);
  battle_wndfx_run();
  return;
}



