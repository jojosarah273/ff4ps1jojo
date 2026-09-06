#include "common.h"
extern int func_800F5B8C();
extern int func_800F5DA0();
extern int func_800F62BC();
extern int func_800F654C();
extern int func_800F824C();
extern int func_800FE7B0();
extern int func_8011EA5C();

void func_80119C24(void)

{
  int iVar1;
  
  func_800F654C(2);
  func_800F824C(0x79);
  do {
    func_800F62BC(0xc4);
    func_800FE7B0();
    func_800F5DA0(0x79);
    iVar1 = func_800F5B8C(0x202);
  } while (iVar1 != 0);
  func_8011EA5C();
  return;
}



