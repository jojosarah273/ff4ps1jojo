/* FF4 source-port — interpreted module for fn_1x6c6fc.
 * Ground truth: src/fn_1x6c6fc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x6c6fc(void)

{
  latch(0x20);
  cell_put(0x28);
  row_prep(0x20);
  shop_rows_x2000_x2a_x28_cells_x4f();
  return;
}



