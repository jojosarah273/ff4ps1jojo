#include "common.h"
extern int func_800F53C0();
extern int func_800F53D4();
extern int func_800F5958();
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F7210();
extern int func_800F8188();
extern int func_800F824C();
extern int func_800F8D00();
extern int func_800FE7D8();
extern int func_800FF024();
extern int func_80115BCC();
extern int func_80115D2C();

void func_801030F8(void)

{
  int iVar1;
  
  func_800F654C(0x10);
  func_800F8188(0xacf);
  func_800F654C(3);
  func_800F8188(0xad0);
  func_800F654C(3);
  func_800F8188(0xad1);
  func_800F71DC(0x7070);
  func_800F8D00(0xad4);
  func_800F71DC(0x28);
  func_800F8D00(0xad2);
  func_800F654C(6);
  func_800F8188(0xacd);
  func_800F654C(2);
  func_800F8188(0xace);
  func_80115BCC();
  do {
    func_800FE7D8();
    func_80115D2C();
    func_800F7210(0xad2);
    func_800F5958(8);
    iVar1 = func_800F53C0();
    if (iVar1 == 0) {
      func_800F654C(1);
      func_800F824C(0xe5);
      func_800FF024();
    }
    func_800F7210(0xad2);
    func_800F5958(0);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  return;
}



