#include "common.h"
extern int func_800999C8();
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F6434();
extern int func_800F6564();
extern int func_800F8F74();
extern int func_800F971C();

void func_8014D31C(void)

{
  int iVar1;
  
  func_800F6564(0xf279);
  iVar1 = func_800F6434(0x202);
  if (iVar1 == 0) {
    func_800F8F74(0xf283);
  }
  else {
    func_800F6564(0xf282);
    func_800F5574(1);
    iVar1 = func_800F53D4();
    if (iVar1 != 0) {
      func_800F8F74(0xf282);
      func_800F971C();
      func_800999C8();
    }
  }
  return;
}



