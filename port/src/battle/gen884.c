/* FF4 source-port — interpreted module for func_80148E80.
 * Ground truth: src/func_80148E80.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"





void func_80148E80(void)

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



