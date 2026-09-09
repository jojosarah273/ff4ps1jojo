/* FF4 source-port — interpreted module for func_8013B118.
 * Ground truth: src/func_8013B118.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"



void func_8013B118(void)

{
  int iVar1;
  
  row_read(1);
  iVar1 = sel(2);
  if (iVar1 == 0) {
    latch(0xa0);
  }
  else {
    latch(0x68);
  }
  return;
}



