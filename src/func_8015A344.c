#include "common.h"
extern int func_800F53C0();
extern int func_800F654C();

void func_8015A344(void)

{
  int iVar1;
  
  iVar1 = func_800F53C0();
  if (iVar1 != 0) {
    func_800F654C(0xff);
  }
  return;
}



