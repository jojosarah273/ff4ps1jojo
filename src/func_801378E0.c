#include "common.h"
extern int func_800F6434();
extern int func_800F6564();
extern int func_800F71DC();
extern int func_800F8D6C();
extern int func_8011F6AC();

void func_801378E0(void)

{
  int iVar1;
  
  func_800F6564(0x1b7a);
  iVar1 = func_800F6434(2);
  if (iVar1 == 0) {
    func_800F71DC(0x3058);
  }
  else {
    func_800F71DC(0x3040);
  }
  func_800F8D6C(0x45);
  func_8011F6AC();
  return;
}



