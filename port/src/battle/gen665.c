/* FF4 source-port — interpreted module for fn_1x4b36c.
 * Ground truth: src/fn_1x4b36c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800953F4();






void fn_1x4b36c(void)

{
  fn_1x41fc4();
  cell_clear_bank(0xf2a0);
  open_row(0);
  latch(6);
  txt_draw(0xf2d0);
  latch(0x80);
  cell_put(1);
  open_row(2);
  txt_set(0xf397);
  fn_1x4da2c();
  latch(0xff);
  txt_draw(0xf320);
  cell_clear_bank(0xf2d0);
  battle_row_f2a0();
  func_800953F4();
  return;
}



