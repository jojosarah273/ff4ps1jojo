/* FF4 source-port — interpreted module for func_8012DB6C.
 * Ground truth: src/func_8012DB6C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_8012D23C();

void func_8012DB6C(void)

{
  page_paint2(0x1bc2);
  func_8012D23C();
  cell_clear_bank(0x1bc2);
  return;
}



