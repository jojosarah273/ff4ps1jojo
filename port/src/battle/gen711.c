/* FF4 source-port — interpreted module for fn_1x02e78.
 * Ground truth: src/fn_1x02e78.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x02e78(void)

{
  int iVar1;
  
  latch(3);
  txt_draw(0x1705);
  do {
    cell_clear_pad();
    shop_buy_run();
    shop_view_run();
    row_page(0x7a);
    row_read(3);
    iVar1 = sel(0x202);
  } while (iVar1 != 0);
  return;
}



