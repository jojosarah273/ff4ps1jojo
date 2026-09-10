/* FF4 source-port — interpreted module for fn_1x1c27c.
 * Ground truth: src/fn_1x1c27c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"





void fn_1x1c27c(void)

{
  int iVar1;
  
  wnd_open(0);
  do {
    cell_pull_c8_off(0x7f5c71);
    cell_step();
    poll_t(0x4000);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



