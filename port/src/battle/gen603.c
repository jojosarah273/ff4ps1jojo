/* FF4 source-port — interpreted module for config_confirm_loop_a.
 * Ground truth: src/config_confirm_loop_a.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"








void config_confirm_loop_a(void)

{
  int iVar1;
  
  do {
    wnd_fx_7d();
    do {
      row_page(0x7f);
      io_poll(2);
      iVar1 = io_just();
    } while (iVar1 == 0);
    poll_pair(0xdf);
    row_page(0xdf);
    io_poll(0);
    iVar1 = io_just();
  } while (iVar1 == 0);
  latch(1);
  cell_put(0xec);
  wnd_fx_7d();
  open_row(0xdf);
  return;
}



