/* FF4 source-port — interpreted module for fn_1x18a40.
 * Ground truth: src/fn_1x18a40.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x18a40(void)

{
  int iVar1;
  
  row_page(0x80);
  iVar1 = gate(0x202);
  if (iVar1 == 0) {
    latch(7);
    shop_rows_run();
    battle_wndfx_run();
  }
  else {
    latch(7);
    shop_rows2_run();
    battle_wndfx_run();
  }
  return;
}



