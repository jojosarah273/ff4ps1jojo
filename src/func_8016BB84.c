#include "common.h"
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F6630();
extern int func_8016DD9C();

void func_8016BB84(void)

{
  int iVar1;
  
  func_800F6630(100);
  func_800F5574(2);
  iVar1 = func_800F53D4();
  if (iVar1 != 0) {
    func_8016DD9C();
  }
  return;
}



