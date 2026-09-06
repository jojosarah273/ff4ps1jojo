#include "common.h"
extern int func_800F53D4();
extern int func_800F5A90();
extern int func_800F63BC();
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F7500();
extern int func_800F8188();
extern int func_800F8D00();
extern int func_800F8F74();
extern int func_800F9868();

void func_8017091C(void)

{
  int iVar1;
  
  func_800F654C(0x18);
  func_800F8188(0x4301);
  func_800F71DC(0);
  func_800F8D00(0x2116);
  func_800F7500(0);
  do {
    func_800F654C(0x80);
    func_800F8188(0x2115);
    func_800F654C(1);
    func_800F8188(0x4300);
    func_800F71DC(0x10);
    func_800F8D00(0x4305);
    func_800F9868(0);
    func_800F8F74(0x420b);
    func_800F8F74(0x2115);
    func_800F8F74(0x4300);
    func_800F71DC(8);
    func_800F8D00(0x4305);
    func_800F9868(0);
    func_800F63BC();
    func_800F5A90(0x180);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  return;
}



