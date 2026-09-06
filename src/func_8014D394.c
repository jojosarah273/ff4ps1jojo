#include "common.h"
extern int func_800999C8();
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6564();
extern int func_800F8188();

void func_8014D394(void)

{
  int iVar1;
  
  func_800F6564(0xf279);
  iVar1 = func_800F6434(0x202);
  if (iVar1 == 0) {
    func_800F654C(1);
    func_800F8188(0xf283);
  }
  else {
    func_800F6564(0xf282);
    iVar1 = func_800F6434(0x202);
    if (iVar1 == 0) {
      func_800F654C(1);
      func_800F8188(0xf282);
      func_800F654C(1);
      func_800999C8();
    }
  }
  return;
}



