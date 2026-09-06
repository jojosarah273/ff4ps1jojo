#include "common.h"
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F5B8C();
extern int func_800F5CCC();
extern int func_800F5DA0();
extern int func_800F61E8();
extern int func_800F654C();
extern int func_800F6564();
extern int func_800F6630();
extern int func_800F824C();
extern int func_800F9200();
extern int func_800F93DC();
extern int func_80176C6C();

void func_80176B6C(void)

{
  int iVar1;
  
  func_800F6630(0xe2);
  func_800F5574(0x11);
  iVar1 = func_800F53D4();
  if (iVar1 == 0) {
    func_800F654C(10);
    func_800F824C(0x45);
    func_800F6564(0x1bb2);
    func_800F5CCC();
    do {
      func_800F9200();
      func_80176C6C();
      func_800F93DC();
      func_800F61E8();
      func_800F5DA0(0x45);
      iVar1 = func_800F5B8C(0x202);
    } while (iVar1 != 0);
  }
  return;
}



