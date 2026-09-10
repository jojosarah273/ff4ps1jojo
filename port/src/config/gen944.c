/* FF4 source-port — interpreted module for fn_1x21b04.
 * Ground truth: src/fn_1x21b04.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x21b04(void)

{
  int iVar1;
  
  do {
    row_page(0x1f);
    cell_draw(0);
    rows_u16_d44_d54_swap_with_c_prep();
    poll_pair(0x1d);
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  row_page(0x20);
  cell_draw(0);
  return;
}



