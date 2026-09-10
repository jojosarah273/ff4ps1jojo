/* FF4 source-port — interpreted module for fn_1x03f00.
 * Ground truth: src/fn_1x03f00.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"




void fn_1x03f00(void)

{
  int iVar1;
  
  row_page(0x79);
  io_poll(0x10);
  iVar1 = io_go();
  if (iVar1 == 0) {
    txt_draw(0x2100);
  }
  return;
}



