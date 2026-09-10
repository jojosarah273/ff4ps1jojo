/* FF4 source-port — interpreted module for fn_1x1ff40.
 * Ground truth: src/fn_1x1ff40.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x1ff40(void)

{
  cell_cursor_dec();
  row_open();
  row_sync();
  row_open2();
  ability_gates_v1_v0_branches_route();
  return;
}



