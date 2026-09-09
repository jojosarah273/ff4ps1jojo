/* FF4 source-port — interpreted module for func_8014B98C.
 * Ground truth: src/func_8014B98C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_8014B93C();

void func_8014B98C(void)

{
  cell_clear_bank(0xf2a0);
  func_8014B93C();
  return;
}



