/* FF4 source-port — interpreted module for func_8011EA14.
 * Ground truth: src/func_8011EA14.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_8011E534();

void func_8011EA14(void)

{
  txt_set(0xfe3);
  func_8011E534();
  return;
}



