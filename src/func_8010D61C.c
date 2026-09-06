#include "common.h"
extern int func_800F62BC();
extern int func_800F6434();
extern int func_800F6564();
extern int func_800F6C68();
extern int func_800F7270();
extern int func_800F824C();
extern int func_800F8FB8();
extern int func_8010D6A0();

void func_8010D61C(void)

{
  int iVar1;
  
  func_800F824C(0x3d);
  func_800F8FB8(0x3e);
  func_800F6564(0xfe5);
  iVar1 = func_800F6434(0x80);
  if (iVar1 == 0) {
    func_800F6564(0x1701);
    iVar1 = func_800F6434(2);
    if (iVar1 != 0) goto LAB_8010d66c;
  }
  func_800F62BC(0x3e);
LAB_8010d66c:
  func_800F7270(0x3d);
  func_800F6C68(0x12f000);
  func_800F824C(6);
  func_8010D6A0();
  return;
}



