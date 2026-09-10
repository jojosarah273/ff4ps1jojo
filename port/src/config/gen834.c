/* FF4 source-port — interpreted module for fn_1x39afc.
 * Ground truth: src/fn_1x39afc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x39afc(void)

{
  row_prep(0x20);
  row_sync2(0x3f);
  wnd_open(0xfc7d);
  draw_pad(0x480);
  battle_wait_just(0x1e7e);
  row_prep_close();
  return;
}



