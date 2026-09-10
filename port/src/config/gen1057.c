/* FF4 source-port — interpreted module for fn_1x3b118.
 * Ground truth: src/fn_1x3b118.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"



void fn_1x3b118(void)

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



