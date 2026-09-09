/* FF4 source-port — interpreted module for func_80111EF4.
 * Ground truth: src/func_80111EF4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F8188();
extern int func_800F8D00();
extern int func_8011EA5C();

void func_80111EF4(void)

{
  latch(1);
  txt_draw(0x1728);
  wnd_open(0x38de);
  label(0x1729);
  func_8011EA5C();
  return;
}



