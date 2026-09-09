/* FF4 source-port — interpreted module for func_801162F8.
 * Ground truth: src/func_801162F8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"






void func_801162F8(void)

{
  int iVar1;
  
  wnd_open(0);
  latch(0xaa);
  do {
    cell_draw(0x500);
    cell_step();
    poll_t(8);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



