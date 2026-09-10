/* FF4 source-port — interpreted module for config_row_b600.
 * Ground truth: src/config_row_b600.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"









void config_row_b600(void)

{
  cell_cursor_dec();
  row_open();
  wnd_open(0xb600);
  tail(0x29);
  wnd_open(0x6000);
  tail(0x35);
  latch(1);
  cell_put(0xc3);
  open_row(0x34);
  row_close();
  row_close2();
  return;
}



