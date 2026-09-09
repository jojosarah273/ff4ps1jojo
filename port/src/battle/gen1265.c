/* FF4 source-port — interpreted module for func_80111F94.
 * Ground truth: src/func_80111F94.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_80111FCC();
extern int func_8011EA5C();

void func_80111F94(void)

{
  wnd_open(0);
  label(0x172c);
  func_80111FCC();
  func_8011EA5C();
  return;
}



