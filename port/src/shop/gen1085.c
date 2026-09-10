/* FF4 source-port — interpreted module for shop_row_41.
 * Ground truth: src/shop_row_41.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_80177DAC();

void shop_row_41(void)

{
  row_open();
  key_page(0x41);
  func_80177DAC();
  fn_1x6bb84();
  row_close();
  return;
}



