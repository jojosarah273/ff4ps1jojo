/* FF4 source-port — interpreted module for fn_1x5a670.
 * Ground truth: src/fn_1x5a670.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x5a670(void)

{
  txt_set(0x397b);
  cell_put(0xdf);
  latch(6);
  cell_put(0xe1);
  options_row_run();
  page(0xe3);
  cell_push_c8(0xf97a0);
  options_rows_x1f_xa9_xaa_windows_x();
  return;
}



