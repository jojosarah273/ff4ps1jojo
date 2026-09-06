#include "common.h"
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6564();
extern int func_800F824C();
extern int func_800F8FB8();
extern int func_8016BF64();
extern int func_80176F60();

void func_8016BFE8(void)

{
  int iVar1;
  
  func_800F6564(0x2100);
  iVar1 = func_800F6434(2);
  if (iVar1 == 0) {
    func_8016BF64();
    func_800F654C(0x4c);
    func_800F824C(0x4f);
    func_800F654C(4);
    func_800F824C(0x51);
    func_80176F60();
  }
  else {
    func_8016BF64();
    func_800F654C(0x52);
    func_800F824C(0x4f);
    func_800F654C(0xf);
    func_800F824C(0x51);
    func_80176F60();
    func_8016BF64();
    func_800F8FB8(0x4f);
    func_800F654C(0x10);
    func_800F824C(0x51);
    func_80176F60();
  }
  return;
}



