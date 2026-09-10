/* FF4 source-port — interpreted module for fn_1x6c734.
 * Ground truth: src/fn_1x6c734.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x6c734(void)

{
  int iVar1;
  
  open_row(0x28);
  txt_set(0x2100);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    latch(0x10);
    cell_put(0x28);
  }
  row_prep(0x20);
  shop_rows_x2000_x2a_x28_cells_x4f();
  return;
}



