/* FF4 source-port — interpreted module for fn_1x0f484.
 * Ground truth: src/fn_1x0f484.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"






void fn_1x0f484(void)

{
  int iVar1;
  
  wnd_open(0);
  do {
    latch(0xff);
    cell_draw(0xe1b);
    cell_draw(0xe3b);
    cell_step();
    poll_t(0x10);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



