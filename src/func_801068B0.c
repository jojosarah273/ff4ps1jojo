#include "common.h"
extern int func_800F5B8C();
extern int func_800F5DA0();
extern int func_800F654C();
extern int func_800F824C();
extern int func_800FE778();

void func_801068B0(void)

{
  int iVar1;
  
  func_800F654C(8);
  func_800F824C(7);
  do {
    func_800FE778();
    func_800F5DA0(0xbb);
    func_800F5DA0(0xbb);
    func_800F5DA0(7);
    iVar1 = func_800F5B8C(0x202);
  } while (iVar1 != 0);
  return;
}



