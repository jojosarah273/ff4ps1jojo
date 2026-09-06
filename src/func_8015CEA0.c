#include "common.h"
extern int func_800F53D4();
extern int func_800F5EA0();
extern int func_800F654C();
extern int func_800F6564();
extern int func_800F824C();
extern int func_800F82EC();
extern int func_800F971C();
extern int func_80150C38();

void func_8015CEA0(void)

{
  int iVar1;
  
  iVar1 = func_800F53D4();
  if (iVar1 != 0) {
    func_800F5EA0();
    func_800F971C();
    func_800F82EC(0x80);
    func_800F5EA0();
    func_800F654C(0x80);
    func_800F82EC(0x80);
  }
  func_800F6564(0x3939);
  func_800F824C(1);
  func_800F654C(6);
  func_80150C38();
  return;
}



