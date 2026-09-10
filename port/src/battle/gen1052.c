/* FF4 source-port — interpreted module for fn_1x48f60.
 * Ground truth: src/fn_1x48f60.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x48f60(void)

{
  txt_cell(0xf1b3);
  row_sel_cell_cur();
  cell_put(0x28);
  txt_cell(0xf133);
  battle_rows_x26_x2b_windows_row_ga();
  return;
}



