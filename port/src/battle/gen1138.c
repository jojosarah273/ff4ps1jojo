/* FF4 source-port — interpreted module for func_8011117C.
 * Ground truth: src/func_8011117C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_801111C4();
extern int func_8011EA5C();

void func_8011117C(void)

{
  wnd_open(0x100);
  tail(0x5e);
  wnd_open(0x1e0);
  tail(0x60);
  func_801111C4();
  func_8011EA5C();
  return;
}



