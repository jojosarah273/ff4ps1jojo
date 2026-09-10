/* FF4 source-port — interpreted module for fn_1x1053c.
 * Ground truth: src/fn_1x1053c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"






void fn_1x1053c(void)

{
  int iVar1;
  
  wnd_open(0);
  do {
    cell_push_c8(0xd8230);
    cell_draw(0xe1b);
    cell_push_c8(0xd8240);
    cell_draw(0xe3b);
    cell_step();
    poll_t(0x10);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



