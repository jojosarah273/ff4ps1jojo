/* FF4 source-port — interpreted module for func_801444D4.
 * Ground truth: src/func_801444D4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_801444FC();

void func_801444D4(void)

{
  cell_clear_bank(0xf446);
  func_801444FC();
  return;
}



