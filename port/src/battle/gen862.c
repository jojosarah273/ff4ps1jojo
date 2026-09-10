/* FF4 source-port — interpreted module for fn_1x03f40.
 * Ground truth: src/fn_1x03f40.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"






void fn_1x03f40(void)

{
  int iVar1;
  
  wnd_open(0);
  do {
    cell_push_c8(0x14fae6);
    cell_draw(0x300);
    cell_step();
    poll_t(0x10);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



