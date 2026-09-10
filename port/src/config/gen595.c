/* FF4 source-port — interpreted module for fn_1x2371c.
 * Ground truth: src/fn_1x2371c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x2371c(void)

{
  int iVar1;
  
  do {
    cell_push_c8(0xfa764);
    battle_rows_42();
    cell_pull_c8(0);
    stat_sync();
    cell_pull_c8(0x40);
    step2();
    row_page(0x34);
    cell_pull_c8(0);
    cell_pull_c8(0x40);
    step2();
    cell_step();
    poll_pair(0x45);
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  return;
}



