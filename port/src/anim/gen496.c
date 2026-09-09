/* FF4 source-port — interpreted module for func_80176B6C.
 * Ground truth: src/func_80176B6C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"












extern int func_80176C6C();

void func_80176B6C(void)

{
  int iVar1;
  
  row_page(0xe2);
  io_poll(0x11);
  iVar1 = io_just();
  if (iVar1 == 0) {
    latch(10);
    cell_put(0x45);
    txt_set(0x1bb2);
    poll_spin();
    do {
      cell_cursor_dec();
      func_80176C6C();
      row_close2();
      cell_set50_from40();
      poll_pair(0x45);
      iVar1 = poll_go(0x202);
    } while (iVar1 != 0);
  }
  return;
}



