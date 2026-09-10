/* FF4 source-port — interpreted module for fn_1x76bfc.
 * Ground truth: src/fn_1x76bfc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x76bfc(void)

{
  int iVar1;
  
  row_page(0xe2);
  io_poll(0x11);
  iVar1 = io_just();
  if (iVar1 == 0) {
    txt_set(0x1bb2);
    poll_spin();
    shop_row_x43_window_x1fff_xfff_x7f();
    txt_set(0x1bb2);
    sep_a();
    row_open_w(8);
    shop_row_x43_window_x1fff_xfff_x7f();
  }
  return;
}



