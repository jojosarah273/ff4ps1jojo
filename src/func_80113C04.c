#include "common.h"
extern int func_800F4120();
extern int func_800F4248();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F8960();
extern int func_801714C4();

void func_80113C04(void)

{
  int iVar1;
  
  func_800F8960(0x300);
  func_800F6630(0x23);
  func_800F4248(1);
  iVar1 = func_800F4120(2);
  if (iVar1 == 0) {
    func_800F654C(0);
    func_801714C4();
  }
  return;
}



