/* FF4 source-port — interpreted module for fn_1x033e0.
 * Ground truth: src/fn_1x033e0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


void fn_1x033e0(void)

{
  int iVar1;
  
  latch(5);
  txt_draw(0x1704);
  latch(3);
  cell_put(0xac);
  txt_draw(0x1705);
  row_page(0xb1);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    row_page(0xe1);
    iVar1 = gate(2);
    if (iVar1 == 0) {
      latch(0x20);
      cell_put(0xad);
      latch(0x10);
      cell_put(0xb8);
      shop_buy_list();
      latch(0xf);
      txt_draw(0x6fd);
    }
    else {
      fn_1x030f8();
      latch(0x20);
      cell_put(0x79);
      latch(0xf);
      txt_draw(0x6fd);
      shop_rows_b8_twin_of_x7a_xb8_windo();
    }
  }
  else {
    battle_rows_run();
    open_row(0x79);
    shop_rows_b8_twin_of_x7a_xb8_windo();
  }
  return;
}



