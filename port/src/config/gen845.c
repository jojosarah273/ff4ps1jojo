/* FF4 source-port — interpreted module for fn_1x267a0.
 * Ground truth: src/fn_1x267a0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x267a0(void)

{
  row_prep(0x20);
  row_sync2(0xff);
  wnd_open(0xa000);
  draw_pad(0xa200);
  battle_wait_just(0x7e7e);
  row_prep_close();
  return;
}



