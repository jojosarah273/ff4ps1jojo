/* FF4 source-port — interpreted module for func_8010E2B8.
 * Ground truth: src/func_8010E2B8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_800FB3F8();
extern int func_8010E338();
extern int func_8011EA5C();
extern int func_8016E9BC();

void func_8010E2B8(void)

{
  func_800FB3F8();
  cell_flags_set4();
  func_8016E9BC();
  func_8010E338();
  func_8011EA5C();
  return;
}



