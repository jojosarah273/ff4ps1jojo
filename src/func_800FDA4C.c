#include "common.h"
extern int func_800F6434();
extern int func_800F6630();
extern int func_80177DAC();

void func_800FDA4C(void)

{
  int iVar1;
  
  do {
    func_80177DAC();
    func_800F6630(2);
    iVar1 = func_800F6434(0x202);
    if (iVar1 != 0) {
      return;
    }
    func_800F6630(3);
    iVar1 = func_800F6434(2);
  } while (iVar1 != 0);
  return;
}



