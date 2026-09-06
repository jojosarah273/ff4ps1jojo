#include "common.h"
extern int func_80095A4C();
extern int func_800F5D24();
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6564();
extern int func_8014D528();

void func_8014071C(void)

{
  int iVar1;
  
  func_800F6564(0xf411);
  iVar1 = func_800F6434(2);
  if (iVar1 == 0) {
    func_800F5D24(0xf411);
    func_80095A4C();
    func_800F654C(0x31);
    func_8014D528();
  }
  return;
}



