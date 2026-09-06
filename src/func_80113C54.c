#include "common.h"
extern int func_800F53C0();
extern int func_800F5958();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F7270();
extern int func_800F8960();

void func_80113C54(void)

{
  int iVar1;
  
  func_800F7270(0x22);
  func_800F5958(0x3ff0);
  iVar1 = func_800F53C0();
  if (iVar1 == 0) {
    func_800F5958(0xf0);
    iVar1 = func_800F53C0();
    if (iVar1 != 0) {
      func_800F654C(0xf0);
      func_800F8960(0x301);
      return;
    }
  }
  func_800F6630(0x22);
  func_800F8960(0x301);
  return;
}



