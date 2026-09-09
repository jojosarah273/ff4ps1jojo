/* FF4 source-port — interpreted module for func_8013C44C.
 * Ground truth: src/func_8013C44C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"




extern int func_8011F6D4();

void func_8013C44C(void)

{
  int iVar1;
  
  row_page(0x60);
  iVar1 = gate(0x202);
  if (iVar1 == 0) {
    latch(0x48);
  }
  else {
    latch(0xb8);
  }
  cell_put(0x45);
  latch(0xe);
  cell_put(0x46);
  func_8011F6D4();
  return;
}



