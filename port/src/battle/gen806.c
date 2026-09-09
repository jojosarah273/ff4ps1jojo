/* FF4 source-port — interpreted module for func_8010F484.
 * Ground truth: src/func_8010F484.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"






void func_8010F484(void)

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



