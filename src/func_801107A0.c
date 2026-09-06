#include "common.h"
extern int func_800F4120();
extern int func_800F4248();
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F62BC();
extern int func_800F6630();
extern int func_80110F2C();
extern int func_80110FA4();
extern int func_8011EA5C();

void func_801107A0(void)

{
  int iVar1;
  
  func_80110F2C();
  do {
    do {
      func_80110FA4();
      func_800F6630(0x7a);
      func_800F4248(7);
      iVar1 = func_800F4120(0x202);
    } while (iVar1 != 0);
    func_800F62BC(0x24);
    func_800F6630(0x24);
    func_800F5574(0x30);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  func_8011EA5C();
  return;
}



