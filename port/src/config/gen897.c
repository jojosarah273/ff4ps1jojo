/* FF4 source-port — interpreted module for fn_1x30a24.
 * Ground truth: src/fn_1x30a24.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"





void fn_1x30a24(void)

{
  int iVar1;
  
  do {
    cell_draw(0xc601);
    cell_step();
    cell_step();
    poll_pair_cur();
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  row_close2();
  return;
}



