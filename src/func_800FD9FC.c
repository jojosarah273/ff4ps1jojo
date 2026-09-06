#include "common.h"
extern int func_800F6434();
extern int func_800F6630();
extern int func_80177DAC();

void func_800FD9FC(void)

{
  int iVar1;
  
  do {
    do {
      func_80177DAC();
      func_800F6630(2);
      iVar1 = func_800F6434(0x202);
    } while (iVar1 != 0);
    func_800F6630(3);
    iVar1 = func_800F6434(0x202);
  } while (iVar1 != 0);
  return;
}



