/* FF4 source-port — interpreted module for fn_1x1b448.
 * Ground truth: src/fn_1x1b448.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"






void fn_1x1b448(void)

{
  int iVar1;
  
  page(0xbc);
  do {
    cell_step();
    cell_push_c8(0x139c00);
    io_poll(0xff);
    iVar1 = io_just();
  } while (iVar1 == 0);
  cell_step();
  tail(0xbc);
  return;
}



