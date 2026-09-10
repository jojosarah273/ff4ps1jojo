/* FF4 source-port — interpreted module for fn_1x2b100.
 * Ground truth: src/fn_1x2b100.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"






void fn_1x2b100(void)

{
  int iVar1;
  
  wnd_open(4);
  do {
    latch(0xff);
    cell_pull_c8(0);
    step2();
    latch(0xf0);
    cell_pull_c8(0);
    step2();
    cell_set50_from54();
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  return;
}



