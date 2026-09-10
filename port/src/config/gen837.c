/* FF4 source-port — interpreted module for fn_1x320e8.
 * Ground truth: src/fn_1x320e8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x320e8(void)

{
  row_prep(0x20);
  row_sync2(599);
  wnd_open(0x300);
  draw_pad(0xa200);
  battle_wait_just(0x7e7e);
  row_prep_close();
  return;
}



