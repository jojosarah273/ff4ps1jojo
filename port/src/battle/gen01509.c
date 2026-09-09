/* FF4 source-port — interpreted module for func_8010F11C.
 * Ground truth: src/func_8010F11C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_8011EA5C();

void func_8010F11C(void)

{
  cell_clear_bank(0x171c);
  func_8011EA5C();
  return;
}



