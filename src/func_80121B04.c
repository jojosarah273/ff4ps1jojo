#include "common.h"
extern int func_800F5B8C();
extern int func_800F5DA0();
extern int func_800F6630();
extern int func_800F8768();
extern int func_801222C4();

void func_80121B04(void)

{
  int iVar1;
  
  do {
    func_800F6630(0x1f);
    func_800F8768(0);
    func_801222C4();
    func_800F5DA0(0x1d);
    iVar1 = func_800F5B8C(0x202);
  } while (iVar1 != 0);
  func_800F6630(0x20);
  func_800F8768(0);
  return;
}



