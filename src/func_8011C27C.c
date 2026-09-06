#include "common.h"
extern int func_800F53D4();
extern int func_800F5958();
extern int func_800F6364();
extern int func_800F71DC();
extern int func_800F885C();

void func_8011C27C(void)

{
  int iVar1;
  
  func_800F71DC(0);
  do {
    func_800F885C(0x7f5c71);
    func_800F6364();
    func_800F5958(0x4000);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  return;
}



