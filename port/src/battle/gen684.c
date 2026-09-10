/* FF4 source-port — interpreted module for fn_1x0d61c.
 * Ground truth: src/fn_1x0d61c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x0d61c(void)

{
  int iVar1;
  
  cell_put(0x3d);
  open_row(0x3e);
  txt_set(0xfe5);
  iVar1 = gate(0x80);
  if (iVar1 == 0) {
    txt_set(0x1701);
    iVar1 = gate(2);
    if (iVar1 != 0) goto LAB_8010d66c;
  }
  key_page(0x3e);
LAB_8010d66c:
  page(0x3d);
  cell_push_c8(0x12f000);
  cell_put(6);
  battle_item_confirm_key_ladders_x1();
  return;
}



