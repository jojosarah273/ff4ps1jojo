/* FF4 source-port — interpreted module for func_8010D24C.
 * Ground truth: src/func_8010D24C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"






void func_8010D24C(void)

{
  int iVar1;
  
  wnd_open(0);
  latch(0);
  do {
    cell_pull_c8_off(0x7f4c00);
    cell_step();
    poll_t(0x400);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



