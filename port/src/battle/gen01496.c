/* FF4 source-port — interpreted module for func_8011F6FC.
 * Ground truth: src/func_8011F6FC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_8011F724();

void func_8011F6FC(void)

{
  page(0x45);
  func_8011F724();
  return;
}



