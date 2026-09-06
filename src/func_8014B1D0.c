#include "common.h"
extern int func_800F6434();
extern int func_800F6564();
extern int func_801425FC();
extern int func_8014AEC4();
extern int func_8014AF3C();
extern int func_8014B9B4();

void func_8014B1D0(void)

{
  int iVar1;
  
  func_800F6564(0x34c5);
  iVar1 = func_800F6434(2);
  if (iVar1 == 0) {
    func_801425FC();
  }
  else {
    func_800F6564(0x3522);
    iVar1 = func_800F6434(2);
    if (iVar1 == 0) {
      func_8014B9B4();
      func_8014AEC4();
      func_801425FC();
      func_8014AF3C();
    }
  }
  return;
}



