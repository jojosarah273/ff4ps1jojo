/* FF4 source-port — interpreted module for func_8011102C.
 * Ground truth: src/func_8011102C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F8188();
extern int func_800F8D00();
extern int func_800F8F74();
extern int func_800F8FB8();
extern int func_8011EA5C();

void func_8011102C(void)

{
  func_800F8F74(0x171f);
  open_row(0xb7);
  wnd_open(0x9e66);
  label(0x171d);
  latch(1);
  txt_draw(0x171c);
  func_8011EA5C();
  return;
}



