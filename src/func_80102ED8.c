#include "common.h"
extern int func_800F4120();
extern int func_800F4248();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F8188();
extern int func_800FE7D8();
extern int func_800FE870();
extern int func_800FF024();

void func_80102ED8(void)

{
  int iVar1;
  
  func_800F654C(3);
  func_800F8188(0x1705);
  do {
    func_800FE870();
    func_800FF024();
    func_800FE7D8();
    func_800F6630(0x7a);
    func_800F4248(7);
    iVar1 = func_800F4120(0x202);
  } while (iVar1 != 0);
  return;
}



