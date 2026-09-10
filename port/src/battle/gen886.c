/* FF4 source-port — interpreted module for fn_1x43d64.
 * Ground truth: src/fn_1x43d64.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x43d64(void)

{
  row_open();
  txt_cell(0xf1f3);
  row_sel_cell_cur();
  cell_put(0x28);
  txt_cell(0xf173);
  fn_1x48fa0();
  row_close();
  return;
}



