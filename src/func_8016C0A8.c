#include "common.h"
extern int func_800F4120();
extern int func_800F4248();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F7270();
extern int func_800F824C();
extern int func_800F8D6C();
extern int func_80176F60();

void func_8016C0A8(void)

{
  int iVar1;
  
  func_800F6630(0x4a);
  func_800F4248(7);
  iVar1 = func_800F4120(2);
  if (iVar1 == 0) {
    func_800F7270(0x70);
    func_800F8D6C(0x4b);
    func_800F7270(0x72);
    func_800F8D6C(0x4d);
    func_800F654C(0x30);
    func_800F824C(0x4f);
    func_800F654C(0x18);
    func_800F824C(0x51);
    func_80176F60();
  }
  return;
}



