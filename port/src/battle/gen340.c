/* FF4 source-port — interpreted module for func_8011EE34.
 * Ground truth: src/func_8011EE34.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"



extern int func_800F7534();


extern int func_800F8E50();






extern int func_800F9868();

void func_8011EE34(void)

{
  row_open2();
  sep();
  cell_cursor_dec();
  row_pad();
  latch(0x80);
  txt_draw(0x2115);
  sep();
  txt_draw(0x420c);
  func_800F7534(0x11d);
  func_800F8E50(0x2116);
  latch(1);
  txt_draw(0x4300);
  latch(0x18);
  txt_draw(0x4301);
  row_prep(0x20);
  cell_push9(0x11f);
  cell_pull9_hi(0x4302);
  cell_push9(0x121);
  cell_pull9_hi(0x4304);
  row_prep_close();
  txt_set(0x123);
  txt_draw(0x4306);
  func_800F9868(0);
  row_pad();
  return;
}



