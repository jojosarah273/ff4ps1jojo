/* FF4 source-port — interpreted module for fn_1x48e80.
 * Ground truth: src/fn_1x48e80.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"





void fn_1x48e80(void)

{
  int iVar1;
  
  wnd_open(0);
  do {
    cell_draw(0xf1b3);
    cell_draw(0xf1f3);
    cell_step();
    poll_t(8);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



