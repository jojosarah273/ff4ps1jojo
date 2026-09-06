#include "common.h"
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6564();
extern int func_800F71DC();
extern int func_800F8188();
extern int func_800F8D00();
extern int func_8014B98C();

void func_8014B8AC(void)

{
  int iVar1;
  
  func_800F6564(0x34c5);
  iVar1 = func_800F6434(2);
  if (iVar1 == 0) {
    func_800F71DC(0x80b0);
    func_800F8D00(0xf289);
    func_800F654C(1);
    func_800F8188(0xf2d0);
    func_8014B98C();
    func_800F71DC(0);
    func_800F8D00(0xf289);
  }
  return;
}



