#include "common.h"
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6564();
extern int func_800F824C();
extern int func_800F8FB8();
extern int func_800F9644();
extern int func_8016C78C();

void func_8016C734(void)

{
  int iVar1;
  
  func_800F8FB8(0x28);
  func_800F6564(0x2100);
  iVar1 = func_800F6434(2);
  if (iVar1 == 0) {
    func_800F654C(0x10);
    func_800F824C(0x28);
  }
  func_800F9644(0x20);
  func_8016C78C();
  return;
}



