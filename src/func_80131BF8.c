#include "common.h"
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F61E8();
extern int func_800F654C();
extern int func_800F8188();
extern int func_80131C50();
extern int func_80131CD8();

void func_80131BF8(void)

{
  int iVar1;
  
  func_800F654C(0);
  func_800F8188(0x1bbd);
  do {
    func_80131CD8();
    func_800F61E8();
    func_800F5574(5);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  func_80131C50();
  return;
}



