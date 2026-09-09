/* FF4 source-port — interpreted module for config_row_d600b.
 * Ground truth: src/config_row_d600b.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"








void config_row_d600b(void)

{
  cell_cursor_dec();
  row_open();
  wnd_open(0xc600);
  tail(0x29);
  wnd_open(0x7800);
  tail(0x35);
  latch(2);
  cell_put(0xc3);
  latch(0x20);
  cell_put(0x34);
  row_close();
  row_close2();
  return;
}



