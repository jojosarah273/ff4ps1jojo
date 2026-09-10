/* FF4 source-port — interpreted module for fn_1x0fca8.
 * Ground truth: src/fn_1x0fca8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x0fca8(void)

{
  fn_1x1053c();
  latch(8);
  txt_draw(0xacf);
  wnd_open(0x10);
  label(0xad2);
  cell_clear_bank(0xacd);
  cell_clear_bank(0xace);
  latch(2);
  txt_draw(0xad0);
  txt_draw(0xad1);
  latch(0x60);
  txt_draw(0xad4);
  txt_draw(0xad5);
  battle_row_e5();
  return;
}



