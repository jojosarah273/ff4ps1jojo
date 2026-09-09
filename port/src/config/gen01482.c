/* FF4 source-port — interpreted module for func_8012B0B0.
 * Ground truth: src/func_8012B0B0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_8012B0D8();

void func_8012B0B0(void)

{
  cell_clear_bank(0x1b19);
  func_8012B0D8();
  return;
}



