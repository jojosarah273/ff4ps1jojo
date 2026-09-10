/* FF4 source-port — interpreted module for fn_1x6c0a8.
 * Ground truth: src/fn_1x6c0a8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x6c0a8(void)

{
  int iVar1;
  
  row_page(0x4a);
  row_read(7);
  iVar1 = sel(2);
  if (iVar1 == 0) {
    page(0x70);
    tail(0x4b);
    page(0x72);
    tail(0x4d);
    latch(0x30);
    cell_put(0x4f);
    latch(0x18);
    cell_put(0x51);
    shop_row_52();
  }
  return;
}



