/* FF4 source-port — interpreted module for func_8016C734.
 * Ground truth: src/func_8016C734.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"






extern int func_8016C78C();

void func_8016C734(void)

{
  int iVar1;
  
  open_row(0x28);
  txt_set(0x2100);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    latch(0x10);
    cell_put(0x28);
  }
  row_prep(0x20);
  func_8016C78C();
  return;
}



