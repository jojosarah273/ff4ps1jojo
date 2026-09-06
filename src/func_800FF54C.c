#include "common.h"
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F654C();
extern int func_800F824C();
extern int func_800F8FB8();
extern int func_800FF5EC();
extern int func_800FF704();
extern int func_801163E8();
extern int func_8011B6B4();

void func_800FF54C(void)

{
  int iVar1;
  
  func_800FF5EC();
  func_800F654C(0x30);
  func_8011B6B4();
  func_800F5574(0);
  iVar1 = func_800F53D4();
  if (iVar1 != 0) {
    func_800F654C(0x3d);
    func_8011B6B4();
    func_800F5574(0);
    iVar1 = func_800F53D4();
    if (iVar1 == 0) {
      func_800F654C(1);
      func_800F824C(0xb1);
      func_800F654C(0xc6);
      func_801163E8();
      func_800F8FB8(0xb1);
    }
  }
  func_800FF704();
  return;
}



