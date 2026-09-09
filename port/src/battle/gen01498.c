/* FF4 source-port — interpreted module for func_8011F6AC.
 * Ground truth: src/func_8011F6AC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F7500();
extern int func_8011F6FC();

void func_8011F6AC(void)

{
  draw_pad(0x310);
  func_8011F6FC();
  return;
}



