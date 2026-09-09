/* FF4 source-port — interpreted module for func_80111ADC.
 * Ground truth: src/func_80111ADC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_80111DC8();

void func_80111ADC(void)

{
  shop_view_run();
  shop_buy_run();
  cell_fill_aa();
  func_80111DC8();
  return;
}



