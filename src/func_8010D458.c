#include "common.h"
extern int func_800F53C0();
extern int func_800F5574();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F6C68();
extern int func_800F7270();
extern int func_800F9330();
extern int func_800F95A0();
extern int func_8010D54C();

void func_8010D458(void)

{
  int iVar1;
  
  func_800F9330();
  func_800F6630(0xc);
  func_800F5574(0x20);
  iVar1 = func_800F53C0();
  if (iVar1 == 0) {
    func_800F6630(0xe);
    func_800F5574(0x20);
    iVar1 = func_800F53C0();
    if (iVar1 == 0) {
      func_8010D54C();
      func_800F7270(0x3d);
      func_800F6C68(0x7f4c00);
      goto LAB_8010d4d4;
    }
  }
  func_800F654C(0);
LAB_8010d4d4:
  func_800F95A0();
  return;
}



