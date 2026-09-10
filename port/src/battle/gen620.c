/* FF4 source-port — interpreted module for fn_1x0d458.
 * Ground truth: src/fn_1x0d458.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x0d458(void)

{
  int iVar1;
  
  row_open();
  row_page(0xc);
  io_poll(0x20);
  iVar1 = io_go();
  if (iVar1 == 0) {
    row_page(0xe);
    io_poll(0x20);
    iVar1 = io_go();
    if (iVar1 == 0) {
      fn_1x0d54c();
      page(0x3d);
      cell_push_c8(0x7f4c00);
      goto LAB_8010d4d4;
    }
  }
  latch(0);
LAB_8010d4d4:
  row_close();
  return;
}



