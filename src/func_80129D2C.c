#include "common.h"
extern int func_800F6434();
extern int func_800F6564();
extern int func_80132C0C();

void func_80129D2C(void)

{
  int iVar1;
  
  func_800F6564(0x1b49);
  iVar1 = func_800F6434(0x202);
  if (iVar1 != 0) {
    func_80132C0C();
  }
  return;
}



