/* FF4 source-port — interpreted module for func_8016C6FC.
 * Ground truth: src/func_8016C6FC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"



extern int func_8016C78C();

void func_8016C6FC(void)

{
  latch(0x20);
  cell_put(0x28);
  row_prep(0x20);
  func_8016C78C();
  return;
}



