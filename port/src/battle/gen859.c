/* FF4 source-port — interpreted module for fn_1x068b0.
 * Ground truth: src/fn_1x068b0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"





void fn_1x068b0(void)

{
  int iVar1;
  
  latch(8);
  cell_put(7);
  do {
    wnd_fx_7d();
    poll_pair(0xbb);
    poll_pair(0xbb);
    poll_pair(7);
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  return;
}



