#include "common.h"
extern int func_800F53D4();
extern int func_800F5958();
extern int func_800F6364();
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F8188();
extern int func_80148D58();
extern int func_80148E08();
extern int func_80148E80();
extern int func_8014C96C();

void func_8014A9B0(void)

{
  int iVar1;
  
  func_80148E08();
  func_800F654C(0x18);
  func_80148E80();
  func_800F71DC(4);
  do {
    func_800F654C(0x80);
    func_80148D58();
    func_800F6364();
    func_800F5958(8);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  func_8014C96C();
  func_800F654C(4);
  func_800F8188(0xf2a0);
  return;
}



