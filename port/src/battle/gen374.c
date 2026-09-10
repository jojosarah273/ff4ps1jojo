/* FF4 source-port — interpreted module for fn_1x1d8e0.
 * Ground truth: src/fn_1x1d8e0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"




void fn_1x1d8e0(void)

{
  int iVar1;
  
  latch(0x80);
  txt_draw(0x2115);
  wnd_fx_tags();
  latch(1);
  txt_draw(0x4300);
  fn_1x1ea14();
  latch(0x20);
  cell_put(7);
  latch(0);
  cell_put(8);
  do {
    row_page(8);
    row_read(0x1f);
    cell_put(0x3e);
    latch(0);
    cell_put(0x3d);
    page(0x3d);
    tail(0x43);
    shop_rows_x3d_x18_x19_windows_cell();
    shop_item_cell_pair_x99_x44_x9a_wi();
    fn_1x1d9f0();
    latch(0x10);
    cell_put(0x3d);
    page(0x3d);
    tail(0x43);
    shop_rows_x3d_x18_x19_windows_cell();
    shop_item_cell_pair_x99_x44_x9a_wi();
    fn_1x1d9f0();
    key_page(8);
    poll_pair(7);
    iVar1 = poll_go(2);
  } while (iVar1 == 0);
  return;
}



