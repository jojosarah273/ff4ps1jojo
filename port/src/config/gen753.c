/* FF4 source-port — interpreted module for fn_1x52eac.
 * Ground truth: src/fn_1x52eac.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x52eac(void)

{
  int iVar1;
  
  wnd_open(0);
  draw_pad(8);
  do {
    row_sel_cell_cur();
    iVar1 = cell_flags_zero50(0x101);
    if (iVar1 == 0) {
      cell_step();
    }
    poll_pair_cur();
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  return;
}



