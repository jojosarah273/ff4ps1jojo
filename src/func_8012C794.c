#include "common.h"
extern int func_800F53C0();
extern int func_800F55C0();
extern int func_800F6558();
extern int func_800F8378();
extern int func_800F9660();
extern int func_801221EC();

void func_8012C794(void)

{
  int iVar1;
  
  func_800F55C0(9999);
  iVar1 = func_800F53C0();
  if (iVar1 != 0) {
    func_800F6558(9999);
  }
  func_800F8378(0x60);
  func_800F9660(0x20);
  func_801221EC();
  return;
}



