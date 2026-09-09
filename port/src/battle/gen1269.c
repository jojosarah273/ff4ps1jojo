/* FF4 source-port — interpreted module for func_8010E2F8.
 * Ground truth: src/func_8010E2F8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_800FB3F8();
extern int func_8010E338();
extern int func_8011EA5C();
extern int func_8016E9DC();

void func_8010E2F8(void)

{
  func_800FB3F8();
  cell_flags_set4();
  func_8016E9DC();
  func_8010E338();
  func_8011EA5C();
  return;
}



