#include "common.h"
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F61E8();
extern int func_800F654C();
extern int func_80131B80();

void func_80131B38(void)

{
  int iVar1;
  
  func_800F654C(0);
  do {
    func_80131B80();
    func_800F61E8();
    func_800F5574(5);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  return;
}



