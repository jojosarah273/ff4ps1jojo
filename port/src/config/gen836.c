/* FF4 source-port — interpreted module for fn_1x34ab0.
 * Ground truth: src/fn_1x34ab0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"






void fn_1x34ab0(void)

{
  cell_push_c8_sel(0x60);
  cell_cursor_dec();
  txt_cell(0x1440);
  cell_pull_c8_bank(0x60);
  row_close2();
  cell_draw(0x1440);
  return;
}



