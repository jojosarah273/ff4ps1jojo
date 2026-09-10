/* FF4 source-port — interpreted module for fn_1x2c4f8.
 * Ground truth: src/fn_1x2c4f8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x2c4f8(void)

{
  int iVar1;
  
  iVar1 = config_save_flow_x60_x45_windows_x();
  if (iVar1 != 2) {
    row_prep(0x20);
    draw_pad(9);
    cell_push89_sel(0x60);
    poll_pair_cur();
    poll_pair_cur();
    cell_pull89_bank(0x60);
    draw_pad(0xd);
    cell_push89_sel(0x60);
    poll_pair_cur();
    poll_pair_cur();
    cell_pull89_bank(0x60);
    row_prep_close();
  }
  return;
}



