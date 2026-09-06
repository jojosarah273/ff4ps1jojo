#include "common.h"
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F824C();
extern int func_8011F6D4();

void func_8013C44C(void)

{
  int iVar1;
  
  func_800F6630(0x60);
  iVar1 = func_800F6434(0x202);
  if (iVar1 == 0) {
    func_800F654C(0x48);
  }
  else {
    func_800F654C(0xb8);
  }
  func_800F824C(0x45);
  func_800F654C(0xe);
  func_800F824C(0x46);
  func_8011F6D4();
  return;
}



