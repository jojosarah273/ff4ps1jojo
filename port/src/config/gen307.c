/* FF4 source-port — interpreted module for fn_1x20ca4.
 * Ground truth: src/fn_1x20ca4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x20ca4(void)

{
  int iVar1;
  
  latch(0x19);
  cell_put(0x45);
  row_prep(0x20);
  row_read2(0x35);
  sep_a();
  cell_pos_fwd(0x600);
  cell_put_hi9(0x1d);
  row_read2(0x29);
  sep_a();
  cell_pos_fwd(0xc00);
  cell_put_hi9(0x1f);
  row_prep_close();
  latch(0x7e);
  cell_put(0x21);
  wnd_open(0x80);
  tail(0x22);
  do {
    midrow_pad88();
    battle_rows_2115();
    row_prep(0x20);
    row_read2(0x1d);
    sep_b();
    cell_pos_back2(0x40);
    cell_put_hi9(0x1d);
    row_read2(0x1f);
    sep_b();
    cell_pos_back2(0x80);
    cell_put_hi9(0x1f);
    row_prep_close();
    poll_pair(0x45);
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  return;
}



