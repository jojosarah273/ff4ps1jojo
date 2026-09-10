/* FF4 source-port — interpreted module for shop_row_41.
 * Ground truth: src/shop_row_41.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void shop_row_41(void)

{
  row_open();
  key_page(0x41);
  fn_1x77dac();
  fn_1x6bb84();
  row_close();
  return;
}



