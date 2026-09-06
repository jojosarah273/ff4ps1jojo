#include "common.h"
extern int func_800F4120();
extern int func_800F4248();
extern int func_800F4370();
extern int func_800F6564();
extern int func_800F6630();
extern int func_800F824C();
extern int func_8010D2A0();

void func_801051A8(void)

{
  int iVar1;
  
  func_800F6630(0xa1);
  func_800F4248(4);
  iVar1 = func_800F4120(2);
  if (iVar1 == 0) {
    func_800F6630(0xa1);
    func_800F4248(3);
    func_800F4370(0xd2);
    iVar1 = func_800F4120(2);
    if (iVar1 != 0) {
      return;
    }
  }
  func_800F6564(0x1706);
  func_800F824C(0xc);
  func_800F6564(0x1707);
  func_800F824C(0xe);
  func_8010D2A0();
  return;
}



