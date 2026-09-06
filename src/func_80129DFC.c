#include "common.h"
extern int func_800F5C64();
extern int func_800F5DA0();
extern int func_800F5E48();
extern int func_800F62BC();
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F7270();
extern int func_800F81E8();
extern int func_800F8D6C();
extern int func_801266C8();

void func_80129DFC(void)

{
  int iVar1;
  
  func_800F71DC(4);
  do {
    func_800F62BC(0x90);
    func_801266C8();
    func_800F5E48();
    iVar1 = func_800F5C64(0x202);
  } while (iVar1 != 0);
  func_800F7270(0x90);
  func_800F8D6C(0x9c);
  func_800F654C(0x1c);
  func_800F81E8(0x212c);
  func_800F71DC(4);
  do {
    func_800F5DA0(0x9c);
    func_801266C8();
    func_800F5E48();
    iVar1 = func_800F5C64(0x202);
  } while (iVar1 != 0);
  return;
}



