/* FF4 source-port — interpreted module for func_800FB2E8.
 * Ground truth: src/func_800FB2E8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F8188();
extern int func_800F8F74();
extern int func_800F8FB8();
extern int func_800FB3A0();
extern int func_800FD718();
extern int func_801709E4();
extern int func_801757A4();

void func_800FB2E8(void)

{
  int iVar1;
  
  func_800FB3A0();
  open_row(0xd1);
  row_page(0x85);
  iVar1 = gate(0x202);
  if (iVar1 == 0) {
    latch(2);
    txt_draw(0x1705);
  }
  open_row(0x85);
  latch(7);
  txt_draw(0x2105);
  latch(0x11);
  txt_draw(0x212c);
  func_800F8F74(0x2130);
  func_800F8F74(0x2131);
  row_page(0xb1);
  iVar1 = gate(0x202);
  if (iVar1 == 0) {
    func_800FD718();
  }
  func_801709E4();
  func_801757A4();
  return;
}



