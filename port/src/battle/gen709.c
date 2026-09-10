/* FF4 source-port — interpreted module for fn_1x03ac8.
 * Ground truth: src/fn_1x03ac8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


void fn_1x03ac8(void)

{
  int iVar1;
  
  open_row(0x79);
  latch(4);
  cell_put(0xa1);
  do {
    fn_1x03eac();
    shop_buy_run();
    wnd_fx_7d_b();
    fn_1x03f00();
    key_page(0x79);
    io_poll(0x28);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



