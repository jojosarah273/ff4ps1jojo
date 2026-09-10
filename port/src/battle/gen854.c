/* FF4 source-port — interpreted module for fn_1x1102c.
 * Ground truth: src/fn_1x1102c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x1102c(void)

{
  cell_clear_bank(0x171f);
  open_row(0xb7);
  wnd_open(0x9e66);
  label(0x171d);
  latch(1);
  txt_draw(0x171c);
  battle_wndfx_run();
  return;
}



