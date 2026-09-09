/* FF4 source-port — interpreted module for func_8010FCA8.
 * Ground truth: src/func_8010FCA8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"





extern int func_8011053C();

void func_8010FCA8(void)

{
  func_8011053C();
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



