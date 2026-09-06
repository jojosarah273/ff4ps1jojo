#include "common.h"
extern int func_800F62BC();
extern int func_800F7494();
extern int func_800F7594();
extern int func_8015A56C();
extern int func_8015ABEC();

void func_8015A524(void)

{
  int iVar1;
  
  func_8015ABEC();
  func_800F7594(0xab);
  iVar1 = func_800F7494(0x202);
  if (iVar1 == 0) {
    func_800F62BC(0xab);
  }
  func_8015A56C();
  return;
}



