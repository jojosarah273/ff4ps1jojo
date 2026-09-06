#include "common.h"
extern int func_800F4FAC();
extern int func_800F5140();
extern int func_800F5C64();
extern int func_800F5EA0();
extern int func_800F6364();
extern int func_800F71DC();
extern int func_800F7500();

void func_80152EAC(void)

{
  int iVar1;
  
  func_800F71DC(0);
  func_800F7500(8);
  do {
    func_800F5140();
    iVar1 = func_800F4FAC(0x101);
    if (iVar1 == 0) {
      func_800F6364();
    }
    func_800F5EA0();
    iVar1 = func_800F5C64(0x202);
  } while (iVar1 != 0);
  return;
}



