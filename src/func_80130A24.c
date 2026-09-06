#include "common.h"
extern int func_800F5C64();
extern int func_800F5EA0();
extern int func_800F6364();
extern int func_800F8768();
extern int func_800F93DC();

void func_80130A24(void)

{
  int iVar1;
  
  do {
    func_800F8768(0xc601);
    func_800F6364();
    func_800F6364();
    func_800F5EA0();
    iVar1 = func_800F5C64(0x202);
  } while (iVar1 != 0);
  func_800F93DC();
  return;
}



