/* FF4 source-port — interpreted module for fn_1x2807c.
 * Ground truth: src/fn_1x2807c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


void fn_1x2807c(void)

{
  row_prep(0x20);
  wnd_open(0xfe28);
  draw_pad(0xa160);
  row_sync2(0x9f);
  battle_wait_just(0x7e7e);
  row_prep_close();
  midrow_pad88();
  battle_state_dc400();
  return;
}



