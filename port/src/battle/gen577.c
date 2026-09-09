/* FF4 source-port — interpreted module for func_801146F0.
 * Ground truth: src/func_801146F0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_8017559C();

void func_801146F0(void)

{
  cell_clear_bank(0x1700);
  latch(4);
  txt_draw(0x1704);
  shop_view2_run();
  latch(0x20);
  cell_put(0xad);
  latch(0x10);
  func_8017559C();
  latch(2);
  cell_put(0xac);
  latch(0x81);
  txt_draw(0x4200);
  cell_clear_bank(0x2100);
  open_row(0x80);
  open_row(0x7b);
  open_row(0x7a);
  return;
}



