/* FF4 source-port — interpreted module for func_80118A40.
 * Ground truth: src/func_80118A40.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_8011EA5C();

void func_80118A40(void)

{
  int iVar1;
  
  row_page(0x80);
  iVar1 = gate(0x202);
  if (iVar1 == 0) {
    latch(7);
    shop_rows_run();
    func_8011EA5C();
  }
  else {
    latch(7);
    shop_rows2_run();
    func_8011EA5C();
  }
  return;
}



