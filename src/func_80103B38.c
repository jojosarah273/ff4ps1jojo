#include "common.h"
extern int func_800F5B8C();
extern int func_800F5DA0();
extern int func_800F654C();
extern int func_800F824C();
extern int func_800FE7B0();
extern int func_800FF024();
extern int func_80103EAC();
extern int func_80103F00();

void func_80103B38(void)

{
  int iVar1;
  
  func_800F654C(0x28);
  func_800F824C(0x79);
  do {
    func_80103EAC();
    func_800FF024();
    func_800FE7B0();
    func_80103F00();
    func_800F5DA0(0x79);
    iVar1 = func_800F5B8C(0x202);
  } while (iVar1 != 0);
  return;
}



