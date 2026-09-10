/* FF4 source-port — interpreted module for fn_1x3c44c.
 * Ground truth: src/fn_1x3c44c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x3c44c(void)

{
  int iVar1;
  
  row_page(0x60);
  iVar1 = gate(0x202);
  if (iVar1 == 0) {
    latch(0x48);
  }
  else {
    latch(0xb8);
  }
  cell_put(0x45);
  latch(0xe);
  cell_put(0x46);
  config_pad_300();
  return;
}



