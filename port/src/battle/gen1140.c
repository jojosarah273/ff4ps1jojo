/* FF4 source-port — interpreted module for func_801094A0.
 * Ground truth: src/func_801094A0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F6364();
extern int func_800F7210();
extern int func_800F8D00();
extern int func_801094D8();

void func_801094A0(void)

{
  page_open(0x772);
  cell_step();
  label(0x772);
  func_801094D8();
  return;
}



