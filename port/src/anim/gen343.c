/* FF4 source-port — interpreted module for fn_1x7477c.
 * Ground truth: src/fn_1x7477c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"













void fn_1x7477c(void)

{
  int iVar1;
  
  wnd_open(0);
  draw_pad(0);
  open_row(7);
  do {
    cell_push_c8(0xfc8c0);
    io_poll(0xff);
    iVar1 = io_just();
    if (iVar1 == 0) {
      cell_pull_c8(0x1560);
      step2();
      key_page(7);
      row_page(7);
      io_poll(0x18);
      iVar1 = io_just();
      if (iVar1 != 0) {
        open_row(7);
      }
    }
    else {
      do {
        latch(0);
        cell_pull_c8(0x1560);
        step2();
        key_page(7);
        row_page(7);
        io_poll(0x18);
        iVar1 = io_just();
      } while (iVar1 == 0);
      open_row(7);
    }
    cell_step();
    poll_t(0x138);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



