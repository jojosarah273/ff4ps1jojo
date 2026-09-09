/* FF4 source-port — interpreted module for func_8011511C.
 * Ground truth: src/func_8011511C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


void func_8011511C(void)

{
  cell_cursor_dec();
  draw_pad(0x1d0);
  latch(0x1c);
  cell_put(0x91);
  latch(0x78);
  cell_put(0x8f);
  page(0x2c);
  tail(0xc);
  page(0x2e);
  tail(0xe);
  latch(0x20);
  cell_put(0xad);
  row_close2();
  cell_put(0x92);
  battle_rows_300();
  draw_pad(400);
  battle_item_rows();
  return;
}



