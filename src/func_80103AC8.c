#include "common.h"
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F62BC();
extern int func_800F654C();
extern int func_800F824C();
extern int func_800F8FB8();
extern int func_800FE7B0();
extern int func_800FF024();
extern int func_80103EAC();
extern int func_80103F00();

void func_80103AC8(void)

{
  int iVar1;
  
  func_800F8FB8(0x79);
  func_800F654C(4);
  func_800F824C(0xa1);
  do {
    func_80103EAC();
    func_800FF024();
    func_800FE7B0();
    func_80103F00();
    func_800F62BC(0x79);
    func_800F5574(0x28);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  return;
}



