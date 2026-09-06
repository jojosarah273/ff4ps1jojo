#include "common.h"
extern int func_8007259C();
extern int func_800F5C64();
extern int func_800F5E48();
extern int func_800F71DC();
extern int func_800F9330();
extern int func_800F95A0();
extern int func_80148CAC();
extern int func_8014E7C4();

void func_8014E75C(void)

{
  int iVar1;
  
  func_800F71DC(0x10);
  do {
    func_800F9330();
    func_8014E7C4();
    func_8007259C();
    func_8007259C();
    func_800F95A0();
    func_800F5E48();
    iVar1 = func_800F5C64(0x202);
  } while (iVar1 != 0);
  func_80148CAC();
  return;
}



