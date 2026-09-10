/* FF4 source-port — interpreted module for fn_1x31b38.
 * Ground truth: src/fn_1x31b38.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x31b38(void)

{
  int iVar1;
  
  latch(0);
  do {
    fn_1x31b80();
    cell_set50_from40();
    io_poll(5);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



