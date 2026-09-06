#include "common.h"
extern int func_800F53D4();
extern int func_800F5958();
extern int func_800F6364();
extern int func_800F654C();
extern int func_800F7270();
extern int func_800F8188();
extern int func_800F8768();

void func_80129EF4(void)

{
  int iVar1;
  
  func_800F654C(0xff);
  func_800F8188(0x1b08);
  func_800F8188(0x1bba);
  func_800F7270(0x41);
  do {
    func_800F8768(0x1b0a);
    func_800F6364();
    func_800F5958(6);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  return;
}



