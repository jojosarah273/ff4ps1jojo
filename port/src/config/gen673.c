/* FF4 source-port — interpreted module for func_80128AD4.
 * Ground truth: src/func_80128AD4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"








extern int func_801208C8();

void func_80128AD4(void)

{
  row_open2();
  cell_put_hi9(0x45);
  row_prep_close();
  latch(0x7e);
  cell_cursor_dec();
  row_pad();
  row_prep(0x20);
  row_read2(0x45);
  func_801208C8();
  row_pad();
  return;
}



