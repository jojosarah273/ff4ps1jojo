/* FF4 source-port — interpreted module for fn_1x051a8.
 * Ground truth: src/fn_1x051a8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x051a8(void)

{
  int iVar1;
  
  row_page(0xa1);
  row_read(4);
  iVar1 = sel(2);
  if (iVar1 == 0) {
    row_page(0xa1);
    row_read(3);
    cell_tick_and(0xd2);
    iVar1 = sel(2);
    if (iVar1 != 0) {
      return;
    }
  }
  txt_set(0x1706);
  cell_put(0xc);
  txt_set(0x1707);
  cell_put(0xe);
  battle_rows_c3c_b9c_d54c_a0_linear();
  return;
}



