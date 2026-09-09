/* FF4 source-port — interpreted module for func_8011107C.
 * Ground truth: src/func_8011107C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"





extern int func_8011EA5C();

void func_8011107C(void)

{
  latch(1);
  txt_draw(0x171f);
  txt_draw(0x171c);
  open_row(0xb7);
  wnd_open(0x5266);
  label(0x171d);
  func_8011EA5C();
  return;
}



