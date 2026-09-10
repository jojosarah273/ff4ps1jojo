/* FF4 source-port — interpreted module for fn_1x39aa4.
 * Ground truth: src/fn_1x39aa4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x39aa4(void)

{
  row_prep(0x20);
  row_sync2(0xf);
  wnd_open(0x8110);
  draw_pad(0xa120);
  battle_wait_just(0xd7e);
  row_prep_close();
  draw_pad(0xf200);
  ability_banner_x1b_window_x2100_x1();
  return;
}



