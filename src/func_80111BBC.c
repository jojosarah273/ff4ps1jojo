#include "common.h"
extern int func_800F53D4();
extern int func_800F5958();
extern int func_800F6364();
extern int func_800F6C68();
extern int func_800F71DC();
extern int func_800F8768();

void func_80111BBC(void)

{
  int iVar1;
  
  func_800F71DC(0);
  do {
    func_800F6C68(0xd8210);
    func_800F8768(0xe1b);
    func_800F8768(0xaad);
    func_800F6C68(0xd8220);
    func_800F8768(0xe3b);
    func_800F6364();
    func_800F5958(0x10);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  return;
}



