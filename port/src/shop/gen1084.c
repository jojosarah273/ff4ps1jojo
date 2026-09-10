/* FF4 source-port — interpreted module for fn_1x6bb84.
 * Ground truth: src/fn_1x6bb84.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x6bb84(void)

{
  int iVar1;
  
  row_page(100);
  io_poll(2);
  iVar1 = io_just();
  if (iVar1 != 0) {
    shop_machine_run();
  }
  return;
}



