/* FF4 source-port — interpreted module for fn_1x6bfe8.
 * Ground truth: src/fn_1x6bfe8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x6bfe8(void)

{
  int iVar1;
  
  txt_set(0x2100);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    fn_1x6bf64();
    latch(0x4c);
    cell_put(0x4f);
    latch(4);
    cell_put(0x51);
    shop_row_52();
  }
  else {
    fn_1x6bf64();
    latch(0x52);
    cell_put(0x4f);
    latch(0xf);
    cell_put(0x51);
    shop_row_52();
    fn_1x6bf64();
    open_row(0x4f);
    latch(0x10);
    cell_put(0x51);
    shop_row_52();
  }
  return;
}



