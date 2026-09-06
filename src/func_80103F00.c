#include "common.h"
extern int func_800F53C0();
extern int func_800F5574();
extern int func_800F6630();
extern int func_800F8188();

void func_80103F00(void)

{
  int iVar1;
  
  func_800F6630(0x79);
  func_800F5574(0x10);
  iVar1 = func_800F53C0();
  if (iVar1 == 0) {
    func_800F8188(0x2100);
  }
  return;
}



