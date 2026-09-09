/* FF4 source-port — interpreted module for func_8015A344.
 * Ground truth: src/func_8015A344.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


void func_8015A344(void)

{
  int iVar1;
  
  iVar1 = io_go();
  if (iVar1 != 0) {
    latch(0xff);
  }
  return;
}



