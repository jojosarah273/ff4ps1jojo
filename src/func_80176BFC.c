#include "common.h"
extern int func_800F4008();
extern int func_800F53D4();
extern int func_800F5410();
extern int func_800F5574();
extern int func_800F5CCC();
extern int func_800F6564();
extern int func_800F6630();
extern int func_80176C6C();

void func_80176BFC(void)

{
  int iVar1;
  
  func_800F6630(0xe2);
  func_800F5574(0x11);
  iVar1 = func_800F53D4();
  if (iVar1 == 0) {
    func_800F6564(0x1bb2);
    func_800F5CCC();
    func_80176C6C();
    func_800F6564(0x1bb2);
    func_800F5410();
    func_800F4008(8);
    func_80176C6C();
  }
  return;
}



