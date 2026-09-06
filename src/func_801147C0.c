#include "common.h"
extern int func_800F53C0();
extern int func_800F5958();
extern int func_800F5C64();
extern int func_800F5E48();
extern int func_800F71DC();
extern int func_800F7270();
extern int func_800F8D6C();
extern int func_80114D18();
extern int func_8011EA5C();

void func_801147C0(void)

{
  int iVar1;
  
  func_800F71DC(0x100);
  func_800F8D6C(0x2c);
  func_800F71DC(0x70);
  func_800F8D6C(0x2e);
  func_800F71DC(0xd0);
  func_800F8D6C(0x89);
  do {
    func_80114D18();
    func_800F7270(0x2c);
    func_800F5E48();
    func_800F8D6C(0x2c);
    func_800F5958(0x70);
    iVar1 = func_800F53C0();
    if (iVar1 == 0) {
      func_800F71DC(0x70);
      func_800F8D6C(0x2c);
    }
    func_800F7270(0x89);
    func_800F5E48();
    func_800F8D6C(0x89);
    iVar1 = func_800F5C64(0x202);
  } while (iVar1 != 0);
  func_8011EA5C();
  return;
}



