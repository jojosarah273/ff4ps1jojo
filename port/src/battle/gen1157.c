/* FF4 source-port — interpreted module for func_8014B9FC.
 * Ground truth: src/func_8014B9FC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_8014DA2C();

void func_8014B9FC(void)

{
  txt_set(0x3522);
  cell_put(2);
  txt_set(0xf397);
  func_8014DA2C();
  return;
}



