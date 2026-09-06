#include "common.h"
extern int func_800F53D4();
extern int func_800F5958();
extern int func_800F6364();
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F8768();

void func_801162F8(void)

{
  int iVar1;
  
  func_800F71DC(0);
  func_800F654C(0xaa);
  do {
    func_800F8768(0x500);
    func_800F6364();
    func_800F5958(8);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  return;
}



