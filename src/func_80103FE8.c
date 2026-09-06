#include "common.h"
extern int func_800F53D4();
extern int func_800F5958();
extern int func_800F6364();
extern int func_800F654C();
extern int func_800F6C68();
extern int func_800F71DC();
extern int func_800F824C();
extern int func_800F8768();
extern int func_800F8D6C();
extern int func_801766B0();

void func_80103FE8(void)

{
  int iVar1;
  
  func_800F71DC(0x4000);
  func_800F8D6C(0x47);
  func_800F71DC(0x100);
  func_800F8D6C(0x45);
  func_800F654C(0x1e);
  func_800F824C(0x3c);
  func_800F71DC(0xfee0);
  func_800F8D6C(0x3d);
  func_801766B0();
  func_800F71DC(0);
  do {
    func_800F6C68(0x1effe0);
    func_800F8768(0xcdb);
    func_800F8768(0xddb);
    func_800F6364();
    func_800F5958(0x20);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  return;
}



