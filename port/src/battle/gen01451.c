/* FF4 source-port — interpreted module for func_8014D4D4.
 * Ground truth: src/func_8014D4D4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_8014D500();

void func_8014D4D4(void)

{
  cell_push_c8(0xdffdd);
  func_8014D500();
  return;
}



