#include "common.h"
extern int func_800F4248();
extern int func_800F53D4();
extern int func_800F5958();
extern int func_800F6B68();
extern int func_800F71DC();
extern int func_800F8768();
extern int func_80117DF8();

void func_800FB3A0(void)

{
  int iVar1;
  
  func_800F71DC(0);
  do {
    func_800F6B68(0x1004);
    func_800F4248(0xbf);
    func_800F8768(0x1004);
    func_80117DF8();
    func_800F5958(0x140);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  return;
}



