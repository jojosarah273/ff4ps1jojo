#include "common.h"
extern int func_800F6240();
extern int func_800F6434();
extern int func_800F6564();
extern int func_800F8F74();
extern int func_8014ADD4();
extern int func_8014AEC4();
extern int func_8014AF3C();
extern int func_8014B9B4();
extern int func_8014BA34();
extern int func_8014C96C();
extern int func_8014C994();

void func_8014AE1C(void)

{
  int iVar1;
  
  func_800F6564(0x34c5);
  iVar1 = func_800F6434(2);
  if (iVar1 == 0) {
    func_8014ADD4();
    func_8014C994();
    func_800F8F74(0xf42e);
  }
  else {
    func_800F6564(0x3522);
    iVar1 = func_800F6434(2);
    if (iVar1 == 0) {
      func_8014B9B4();
      func_8014AEC4();
      func_8014ADD4();
      func_8014C96C();
      func_800F6240(0xf2a0);
      func_8014AF3C();
      func_8014BA34();
      func_800F8F74(0xf42e);
    }
  }
  return;
}



