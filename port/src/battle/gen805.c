/* FF4 source-port — interpreted module for fn_1x107a0.
 * Ground truth: src/fn_1x107a0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


void fn_1x107a0(void)

{
  int iVar1;
  
  fn_1x10f2c();
  do {
    do {
      fn_1x10fa4();
      row_page(0x7a);
      row_read(7);
      iVar1 = sel(0x202);
    } while (iVar1 != 0);
    key_page(0x24);
    row_page(0x24);
    io_poll(0x30);
    iVar1 = io_just();
  } while (iVar1 == 0);
  battle_wndfx_run();
  return;
}



