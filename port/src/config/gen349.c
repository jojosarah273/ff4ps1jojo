/* FF4 source-port — interpreted module for func_80129C54.
 * Ground truth: src/func_80129C54.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F3D48();
extern int func_800F5B8C();
extern int func_800F5DA0();
extern int func_800F6364();
extern int func_800F63BC();
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6564();
extern int func_800F6B68();
extern int func_800F71DC();
extern int func_800F7500();
extern int func_800F824C();
extern int func_800F8960();
extern int func_800F9330();
extern int func_800F939C();
extern int func_800F95A0();
extern int func_800F960C();
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
    func_800F8960(0xc600);
    stat_sync();
    func_800F8960(0xc640);
    step2();
    step2();
    poll_pair(0x45);
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  row_done();
  row_close();
  return;
}



