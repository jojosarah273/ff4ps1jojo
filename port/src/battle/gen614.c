/* FF4 source-port — interpreted module for fn_1x4ad44.
 * Ground truth: src/fn_1x4ad44.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"



void fn_1x4ad44(void)

{
  cell_cursor_dec();
  txt_set(0x34c4);
  row_read(0x80);
  txt_draw(0xf279);
  txt_set(0x34c5);
  txt_draw(0xf27a);
  txt_draw(0xf281);
  txt_draw(0xf284);
  battle_cast_rows_d4_b98_preps_fac();
  fn_1x4d394();
  latch(3);
  txt_draw(0xf281);
  row_close2();
  battle_item_count_x26_x28_x2a_wind();
  page_paint2(0xf42e);
  return;
}



