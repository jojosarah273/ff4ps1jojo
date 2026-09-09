/* FF4 source-port — interpreted module for func_801068B0.
 * Ground truth: src/func_801068B0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"





void func_801068B0(void)

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



