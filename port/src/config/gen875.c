/* FF4 source-port — interpreted module for fn_1x5aa6c.
 * Ground truth: src/fn_1x5aa6c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


void fn_1x5aa6c(void)

{
  txt_set(0x397b);
  cell_put(0xdf);
  latch(3);
  cell_put(0xe1);
  options_row_run();
  page(0xe3);
  tail(0xa9);
  options_rows_b();
  options_cursor_cells();
  return;
}



