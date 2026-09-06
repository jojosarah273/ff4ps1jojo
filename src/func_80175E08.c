#include "common.h"
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F6240();
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6564();
extern int func_800F6B68();
extern int func_800F8188();
extern int func_800F824C();
extern int func_80175E88();

void func_80175E08(void)

{
  int iVar1;
  
  do {
    func_800F6240(0x1703);
    func_800F6564(0x1703);
    func_800F5574(5);
    iVar1 = func_800F53D4();
    if (iVar1 != 0) {
      func_800F654C(0);
      func_800F8188(0x1703);
    }
    func_80175E88();
    func_800F6B68(0x1000);
    iVar1 = func_800F6434(2);
  } while (iVar1 != 0);
  func_800F654C(1);
  func_800F824C(0xcc);
  return;
}



