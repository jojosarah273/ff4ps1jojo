#include "common.h"
extern int func_800F4064();
extern int func_800F53C0();
extern int func_800F5410();
extern int func_800F55C0();
extern int func_800F6558();
extern int func_800F6764();
extern int func_800F7500();
extern int func_800F8378();
extern int func_800F9644();
extern int func_800F9660();
extern int func_801221EC();

void func_8012C82C(void)

{
  int iVar1;
  
  func_800F9644(0x20);
  func_800F7500(0xd);
  func_800F6764(0x60);
  func_800F5410();
  func_800F4064(10);
  func_800F55C0(999);
  iVar1 = func_800F53C0();
  if (iVar1 != 0) {
    func_800F6558(999);
  }
  func_800F8378(0x60);
  func_800F9660(0x20);
  func_801221EC();
  return;
}



