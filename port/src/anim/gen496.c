/* FF4 source-port — interpreted module for fn_1x76b6c.
 * Ground truth: src/fn_1x76b6c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x76b6c(void)

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
      shop_row_x43_window_x1fff_xfff_x7f();
      row_close2();
      cell_set50_from40();
      poll_pair(0x45);
      iVar1 = poll_go(0x202);
    } while (iVar1 != 0);
  }
  return;
}



