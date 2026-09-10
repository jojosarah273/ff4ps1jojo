/* FF4 source-port — interpreted module for fn_1x76e98.
 * Ground truth: src/fn_1x76e98.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x76e98(void)

{
  row_prep(0x20);
  wnd_open(0x87d0);
  draw_pad(0xa000);
  row_sync2(0x1f);
  battle_wait_just(0xd7e);
  wnd_open(0x87d0);
  draw_pad(0xa040);
  row_sync2(0x1f);
  battle_wait_just(0xd7e);
  wnd_open(0x87d0);
  draw_pad(0xa080);
  row_sync2(0x1f);
  battle_wait_just(0xd7e);
  wnd_open(0x87d0);
  draw_pad(0xa0c0);
  row_sync2(0x1f);
  battle_wait_just(0xd7e);
  wnd_open(0x87d0);
  draw_pad(0xa060);
  row_sync2(7);
  battle_wait_just(0xd7e);
  row_prep_close();
  return;
}



