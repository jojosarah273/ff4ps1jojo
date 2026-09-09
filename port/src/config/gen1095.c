/* FF4 source-port — interpreted module for func_8015A30C.
 * Ground truth: src/func_8015A30C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"



void func_8015A30C(void)

{
  int iVar1;
  
  io_poll(99);
  iVar1 = io_go();
  if (iVar1 != 0) {
    latch(99);
  }
  return;
}



