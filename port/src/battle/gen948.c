/* FF4 source-port — interpreted module for fn_1x13c04.
 * Ground truth: src/fn_1x13c04.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x13c04(void)

{
  int iVar1;
  
  cell_pull_c8(0x300);
  row_page(0x23);
  row_read(1);
  iVar1 = sel(2);
  if (iVar1 == 0) {
    latch(0);
    shop_picker_7();
  }
  return;
}



