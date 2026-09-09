/* FF4 source-port — interpreted module for func_8012CC4C.
 * Ground truth: src/func_8012CC4C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_8012C250();

void func_8012CC4C(void)

{
  cell_clear_bank(0x1a03);
  func_8012C250();
  return;
}



