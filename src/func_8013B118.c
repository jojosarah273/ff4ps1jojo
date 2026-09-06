#include "common.h"
extern int func_800F4120();
extern int func_800F4248();
extern int func_800F654C();

void func_8013B118(void)

{
  int iVar1;
  
  func_800F4248(1);
  iVar1 = func_800F4120(2);
  if (iVar1 == 0) {
    func_800F654C(0xa0);
  }
  else {
    func_800F654C(0x68);
  }
  return;
}



