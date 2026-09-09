/* FF4 source-port — interpreted module for midrow_paint_b.
 * Ground truth: src/midrow_paint_b.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"









void midrow_paint_b(void)

{
  cell_cursor_dec();
  row_open();
  wnd_open(0xd600);
  tail(0x29);
  wnd_open(0x7000);
  tail(0x35);
  latch(3);
  cell_put(0xc3);
  open_row(0x34);
  row_close();
  row_close2();
  return;
}



