#include "common.h"
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800FD85C();
extern int func_800FD914();
extern int func_8011EA5C();

void func_80118A40(void)

{
  int iVar1;
  
  func_800F6630(0x80);
  iVar1 = func_800F6434(0x202);
  if (iVar1 == 0) {
    func_800F654C(7);
    func_800FD85C();
    func_8011EA5C();
  }
  else {
    func_800F654C(7);
    func_800FD914();
    func_8011EA5C();
  }
  return;
}



