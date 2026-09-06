#include "common.h"
extern int func_800F4120();
extern int func_800F4248();
extern int func_800F62BC();
extern int func_800F6434();
extern int func_800F6564();
extern int func_800F6630();
extern int func_80175E08();

void func_80175D90(void)

{
  int iVar1;
  
  func_800F6564(0x1704);
  iVar1 = func_800F6434(0x202);
  if (iVar1 == 0) {
    func_800F6630(2);
    func_800F4248(0x10);
    iVar1 = func_800F4120(2);
    if (iVar1 == 0) {
      func_800F6630(0x53);
      iVar1 = func_800F6434(2);
      if (iVar1 != 0) {
        func_800F62BC(0x53);
        func_80175E08();
      }
    }
  }
  return;
}



