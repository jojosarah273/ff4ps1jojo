#include "common.h"
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F6434();
extern int func_800F6564();
extern int func_800FDD8C();
extern int func_800FE110();

void func_800FDAFC(void)

{
  int iVar1;
  
  func_800F6564(0x1700);
  iVar1 = func_800F6434(0x202);
  if (iVar1 == 0) {
    func_800FE110();
  }
  else {
    func_800F5574(1);
    iVar1 = func_800F53D4();
    if (iVar1 != 0) {
      func_800FDD8C();
    }
  }
  return;
}



