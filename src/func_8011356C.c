#include "common.h"
extern int func_800F4120();
extern int func_800F4248();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F7170();
extern int func_800F71DC();
extern int func_800F7210();
extern int func_800F8188();
extern int func_800F8D00();
extern int func_800F8F74();
extern int func_800FD804();
extern int func_800FE7D8();
extern int func_800FE8B4();
extern int func_80115BCC();
extern int func_80115D2C();
extern int func_80119AC8();

void func_8011356C(void)

{
  int iVar1;
  
  func_800F654C(0x20);
  func_800F8188(0xacf);
  func_800F654C(2);
  func_800F8188(0xad0);
  func_800F8188(0xad1);
  func_800F71DC(0x30);
  func_800F8D00(0xad2);
  func_800F654C(6);
  func_800F8188(0xacd);
  func_800F8F74(0xace);
  func_80115BCC();
  do {
    func_800FE7D8();
    func_80119AC8();
    func_80115D2C();
    func_800F6630(0x7a);
    func_800F4248(0x3f);
    iVar1 = func_800F4120(0x202);
    if (iVar1 == 0) {
      func_800F654C(0x23);
      func_800FD804();
    }
    func_800F7210(0xad2);
    iVar1 = func_800F7170(0x202);
  } while (iVar1 != 0);
  func_800FE8B4();
  return;
}



