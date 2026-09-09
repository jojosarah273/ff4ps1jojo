/* FF4 source-port — interpreted module for func_8010E050.
 * Ground truth: src/func_8010E050.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F8188();
extern int func_8010E0D0();
extern int func_8011EA5C();

void func_8010E050(void)

{
  latch(0x80);
  txt_draw(0x2100);
  latch(0);
  txt_draw(0x4200);
  latch(0xff);
  txt_draw(0x2140);
  func_8010E0D0();
  func_8011EA5C();
  return;
}



