/* FF4 source-port — interpreted module for fn_1x1ebbc.
 * Ground truth: src/fn_1x1ebbc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x1ebbc(void)

{
  row_open2();
  row_open3();
  sep();
  cell_pull_c8_lo(0x4200);
  latch(0x7e);
  cell_cursor_dec();
  row_pad();
  ability_wrapper_ea9c_d3c_f8f8x3_in();
  latch(0x80);
  cell_pull_c8_lo(0x2100);
  sep();
  stat_sync();
  cell_cursor_read();
  row_pad();
  return;
}



