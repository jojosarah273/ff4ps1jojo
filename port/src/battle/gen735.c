/* FF4 source-port — interpreted module for func_80111BBC.
 * Ground truth: src/func_80111BBC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"






void func_80111BBC(void)

{
  int iVar1;
  
  wnd_open(0);
  do {
    cell_push_c8(0xd8210);
    cell_draw(0xe1b);
    cell_draw(0xaad);
    cell_push_c8(0xd8220);
    cell_draw(0xe3b);
    cell_step();
    poll_t(0x10);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



