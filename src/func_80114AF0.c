#include "common.h"
extern int func_800F53C0();
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F5958();
extern int func_800F5E48();
extern int func_800F6630();
extern int func_800F71DC();
extern int func_800F7270();
extern int func_800F7500();
extern int func_800F8188();
extern int func_800F8D6C();
extern int func_800F8EBC();
extern int func_800F8FB8();
extern int func_800FE778();
extern int func_80114C98();
extern int func_80115A34();
extern int func_8011EA5C();

void func_80114AF0(void)

{
  int iVar1;
  
  func_800F71DC(0x70);
  func_800F8D6C(0x2c);
  func_800F71DC(0x78);
  func_800F8D6C(0x2e);
  do {
    func_800FE778();
    func_800F6630(0x2e);
    func_800F5574(0x10);
    iVar1 = func_800F53C0();
    if (iVar1 == 0) {
      func_800F8188(0x2100);
    }
    func_80114C98();
    func_800F7500(0x78);
    func_800F8EBC(0xe);
    func_800F7500(0x150);
    func_80115A34();
    func_800F7270(0x2e);
    func_800F5E48();
    func_800F8D6C(0x2e);
    func_800F5958(0);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  func_800F8FB8(0x80);
  func_8011EA5C();
  return;
}



