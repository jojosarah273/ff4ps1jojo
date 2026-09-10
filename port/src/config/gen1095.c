/* FF4 source-port — interpreted module for fn_1x5a30c.
 * Ground truth: src/fn_1x5a30c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"



void fn_1x5a30c(void)

{
  int iVar1;
  
  io_poll(99);
  iVar1 = io_go();
  if (iVar1 != 0) {
    latch(99);
  }
  return;
}



