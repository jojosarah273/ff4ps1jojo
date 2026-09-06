#include "common.h"
extern int func_800F5C64();
extern int func_800F5E48();
extern int func_800F63BC();
extern int func_800F6434();
extern int func_800F6564();
extern int func_800F71DC();
extern int func_800F7594();
extern int func_800F8960();
extern int func_800F9200();
extern int func_800F93DC();
extern int func_800F971C();
extern int func_80126D48();

void func_80123CB4(void)

{
  int iVar1;
  
  func_800F9200();
  func_800F6564(0x16b7);
  iVar1 = func_800F6434(0x202);
  if (iVar1 == 0) {
    func_800F71DC(0xeb);
    func_800F7594(0x41);
    func_800F971C();
    do {
      func_800F8960(0x1b00);
      func_800F63BC();
      func_800F5E48();
      iVar1 = func_800F5C64(0x202);
    } while (iVar1 != 0);
    func_80126D48();
  }
  func_800F93DC();
  return;
}



