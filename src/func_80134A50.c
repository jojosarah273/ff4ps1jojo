#include "common.h"
extern int func_800F53C0();
extern int func_800F5410();
extern int func_800F5480();
extern int func_800F5574();

void func_80134A50(void)

{
  int iVar1;
  
  func_800F5574(0x54);
  iVar1 = func_800F53C0();
  if (iVar1 != 0) {
    func_800F5574(0x60);
    iVar1 = func_800F53C0();
    if (iVar1 == 0) {
      func_800F5480();
      return;
    }
  }
  func_800F5410();
  return;
}



