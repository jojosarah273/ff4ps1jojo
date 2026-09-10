/* FF4 source-port — interpreted module for config_pad_300.
 * Ground truth: src/config_pad_300.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_8011F6FC();

void config_pad_300(void)

{
  draw_pad(0x300);
  func_8011F6FC();
  return;
}



