#include "common.h"
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
  func_800F8FB8(0xd1);
  func_800F6630(0x85);
  iVar1 = func_800F6434(0x202);
  if (iVar1 == 0) {
    func_800F654C(2);
    func_800F8188(0x1705);
  }
  func_800F8FB8(0x85);
  func_800F654C(7);
  func_800F8188(0x2105);
  func_800F654C(0x11);
  func_800F8188(0x212c);
  func_800F8F74(0x2130);
  func_800F8F74(0x2131);
  func_800F6630(0xb1);
  iVar1 = func_800F6434(0x202);
  if (iVar1 == 0) {
    func_800FD718();
  }
  func_801709E4();
  func_801757A4();
  return;
}



