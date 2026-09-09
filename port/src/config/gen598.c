/* FF4 source-port — interpreted module for func_80120E2C.
 * Ground truth: src/func_80120E2C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"









void func_80120E2C(void)

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



