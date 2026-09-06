#include "common.h"
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F5DA0();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F824C();
extern int func_800F8FB8();
extern int func_800FE778();

void func_80107F3C(void)

{
  int iVar1;
  
  do {
    func_800FE778();
    do {
      func_800F6630(0x7f);
      func_800F5574(2);
      iVar1 = func_800F53D4();
    } while (iVar1 == 0);
    func_800F5DA0(0xdf);
    func_800F6630(0xdf);
    func_800F5574(0);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  func_800F654C(1);
  func_800F824C(0xec);
  func_800FE778();
  func_800F8FB8(0xdf);
  return;
}



