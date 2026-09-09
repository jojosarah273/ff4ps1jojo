/* FF4 source-port — interpreted module for func_80148E08.
 * Ground truth: src/func_80148E08.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"







void func_80148E08(void)

{
  int iVar1;
  
  wnd_open(0);
  latch(0x40);
  do {
    page_paint(0xf133);
    cell_draw(0xf173);
    cell_step();
    poll_t(8);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



