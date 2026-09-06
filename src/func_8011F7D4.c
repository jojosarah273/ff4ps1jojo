#include "common.h"
extern int func_800F4120();
extern int func_800F4248();
extern int func_800F5410();
extern int func_800F5480();
extern int func_800F63F8();
extern int func_800F6630();
extern int func_800F824C();
extern int func_8011F884();

void func_8011F7D4(void)

{
  int iVar1;
  
  func_800F6630(1);
  func_800F4248(3);
  iVar1 = func_800F4120(0x202);
  if (iVar1 == 0) {
    func_8011F884();
    func_800F6630(3);
    func_800F63F8();
    func_800F824C(1);
    func_800F5410();
  }
  else {
    func_800F5480();
  }
  return;
}



