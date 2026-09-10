/* FF4 source-port — interpreted module for fn_1x3b8d4.
 * Ground truth: src/fn_1x3b8d4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"




void fn_1x3b8d4(void)

{
  int iVar1;
  
  do {
    cell_pull_c8(0);
    step2();
    step2();
    step2();
    step2();
    cell_set50_from54();
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  return;
}



