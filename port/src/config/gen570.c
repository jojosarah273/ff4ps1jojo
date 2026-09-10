/* FF4 source-port — interpreted module for fn_1x255e8.
 * Ground truth: src/fn_1x255e8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"








void fn_1x255e8(void)

{
  int iVar1;
  
  wnd_open(10);
  row_prep(0x20);
  do {
    row_sync2(0xf0ff);
    cell_stamp8_9_b(0);
    row_sync2(0x3000);
    cell_stamp8_9_b(2);
    step2();
    step2();
    step2();
    step2();
    cell_set50_from54();
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  row_prep_close();
  return;
}



