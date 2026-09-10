/* FF4 source-port — interpreted module for fn_1x03b38.
 * Ground truth: src/fn_1x03b38.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


void fn_1x03b38(void)

{
  int iVar1;
  
  latch(0x28);
  cell_put(0x79);
  do {
    fn_1x03eac();
    shop_buy_run();
    wnd_fx_7d_b();
    fn_1x03f00();
    poll_pair(0x79);
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  return;
}



