#include "common.h"
extern int func_800F5C64();
extern int func_800F5E48();
extern int func_800F63BC();
extern int func_800F6558();
extern int func_800F71DC();
extern int func_800F89D4();
extern int func_800F9644();
extern int func_800F9660();

void func_801255E8(void)

{
  int iVar1;
  
  func_800F71DC(10);
  func_800F9644(0x20);
  do {
    func_800F6558(0xf0ff);
    func_800F89D4(0);
    func_800F6558(0x3000);
    func_800F89D4(2);
    func_800F63BC();
    func_800F63BC();
    func_800F63BC();
    func_800F63BC();
    func_800F5E48();
    iVar1 = func_800F5C64(0x202);
  } while (iVar1 != 0);
  func_800F9660(0x20);
  return;
}



