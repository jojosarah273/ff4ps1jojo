/* FF4 source-port — interpreted module for func_8014B9B4.
 * Ground truth: src/func_8014B9B4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F4248();
extern int func_800F6564();
extern int func_800F824C();
extern int func_8014B9FC();

void func_8014B9B4(void)

{
  txt_set(0x34c4);
  row_read(0x80);
  cell_put(0);
  txt_set(0x34c5);
  cell_put(1);
  func_8014B9FC();
  return;
}



