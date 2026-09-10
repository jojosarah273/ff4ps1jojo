/* FF4 source-port — interpreted module for fn_1x39c0c.
 * Ground truth: src/fn_1x39c0c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x39c0c(void)

{
  int iVar1;
  
  cell_cursor_dec();
  cell_put(0x57);
  midrow_prep_a();
  iVar1 = io_just();
  if (iVar1 == 0) {
    tail(0xe5);
    weapon_sub_menu_x1b39_text_x45_x48();
    iVar1 = io_go();
    if (iVar1 != 0) {
      row_page(0x57);
      row_sel_cell_cur();
      cell_put(0x43);
      page(0x43);
      latch(8);
      cell_draw(0x1b4b);
    }
  }
  row_close2();
  return;
}



