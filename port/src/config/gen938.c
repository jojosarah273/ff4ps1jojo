/* FF4 source-port — interpreted module for fn_1x2c794.
 * Ground truth: src/fn_1x2c794.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x2c794(void)

{
  int iVar1;
  
  cell_flags_cmp3(9999);
  iVar1 = io_go();
  if (iVar1 != 0) {
    row_sync2(9999);
  }
  cell_pull89_bank(0x60);
  row_prep_close();
  config_row_221ec();
  return;
}



