/* FF4 source-port — interpreted module for func_801267A0.
 * Ground truth: src/func_801267A0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void func_801267A0(void)

{
  row_prep(0x20);
  row_sync2(0xff);
  wnd_open(0xa000);
  draw_pad(0xa200);
  battle_wait_just(0x7e7e);
  row_prep_close();
  return;
}



