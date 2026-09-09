/* FF4 source-port — interpreted module for func_80129C54.
 * Ground truth: src/func_80129C54.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

















extern int func_801245B4();

void func_80129C54(void)

{
  int iVar1;
  
  row_open();
  row_sync();
  txt_set(0x1b49);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    draw_pad(0x152);
  }
  else {
    draw_pad(0xe0);
  }
  wnd_open(0x1b0a);
  latch(6);
  cell_put(0x45);
  do {
    txt_cell(0);
    cell_step();
    func_801245B4();
    cell_pull_c8(0xc600);
    stat_sync();
    cell_pull_c8(0xc640);
    step2();
    step2();
    poll_pair(0x45);
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  row_done();
  row_close();
  return;
}



