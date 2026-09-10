/* FF4 source-port — interpreted module for func_8012102C.
 * Ground truth: src/func_8012102C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void func_8012102C(void)

{
  config_row_a600();
  cell_cursor_dec();
  row_open();
  wnd_open(0xa600);
  tail(0x29);
  wnd_open(0x6800);
  tail(0x35);
  sep();
  cell_put(0xc3);
  latch(0x20);
  cell_put(0x34);
  row_close();
  row_close2();
  return;
}



