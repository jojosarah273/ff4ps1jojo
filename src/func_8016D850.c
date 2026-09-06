#include "common.h"
extern int func_800F4064();
extern int func_800F53D4();
extern int func_800F5410();
extern int func_800F5958();
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6564();
extern int func_800F6658();
extern int func_800F71DC();
extern int func_800F7270();
extern int func_800F8188();
extern int func_800F8274();
extern int func_800F8D00();
extern int func_800F8F74();
extern int func_800F9200();
extern int func_800F926C();
extern int func_800F9448();
extern int func_800F9644();
extern int func_800F9660();
extern int func_800F971C();
extern int func_800F9868();

void func_8016D850(void)

{
  int iVar1;
  
  func_800F6564(0x7d20);
  iVar1 = func_800F6434(2);
  if (iVar1 == 0) {
    func_800F926C();
    func_800F971C();
    func_800F9200();
    func_800F9448();
    func_800F654C(0);
    func_800F8188(0x2115);
    func_800F7270(0x92);
    func_800F8D00(0x2116);
    func_800F7270(0x90);
    func_800F8D00(0x4352);
    func_800F654C(0x7e);
    func_800F8188(0x4354);
    func_800F654C(0);
    func_800F8188(0x4350);
    func_800F654C(0x18);
    func_800F8188(0x4351);
    func_800F71DC(0x100);
    func_800F8D00(0x4355);
    func_800F9868(0x50);
    func_800F654C(0x80);
    func_800F8188(0x2115);
    func_800F9448();
    func_800F9644(0x20);
    func_800F6658(0x90);
    func_800F5410();
    func_800F4064(0x100);
    func_800F8274(0x90);
    func_800F6658(0x92);
    func_800F5410();
    func_800F4064(0x100);
    func_800F8274(0x92);
    func_800F971C();
    func_800F9660(0x20);
    func_800F7270(0x92);
    func_800F5958(0x4000);
    iVar1 = func_800F53D4();
    if (iVar1 != 0) {
      func_800F8F74(0x7d20);
    }
  }
  return;
}



