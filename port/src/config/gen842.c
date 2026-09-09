/* FF4 source-port — interpreted module for func_8012807C.
 * Ground truth: src/func_8012807C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


void func_8012807C(void)

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



