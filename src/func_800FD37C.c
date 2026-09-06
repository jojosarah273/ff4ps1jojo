#include "common.h"
extern int func_800F4248();
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6564();
extern int func_800F8188();
extern int func_800FD404();
extern int func_8011B6B4();

void func_800FD37C(void)

{
  int iVar1;
  
  func_800F6564(0x1701);
  iVar1 = func_800F6434(2);
  if (iVar1 == 0) {
    func_800F654C(1);
  }
  func_800F8188(0x1801);
  func_800FD404();
  func_800F654C(0xe1);
  func_8011B6B4();
  func_800F5574(0);
  iVar1 = func_800F53D4();
  if (iVar1 != 0) {
    func_800F6564(0x1802);
    func_800F4248(0x7f);
    func_800F8188(0x1802);
  }
  return;
}



