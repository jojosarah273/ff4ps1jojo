/* FF4 source-port — interpreted module for func_8011368C.
 * Ground truth: src/func_8011368C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F8188();
extern int func_8011356C();
extern int func_8011EA5C();

void func_8011368C(void)

{
  latch(0x70);
  txt_draw(0xad4);
  latch(0x70);
  txt_draw(0xad5);
  func_8011356C();
  func_8011EA5C();
  return;
}



