#include "common.h"
extern int func_800F4120();
extern int func_800F4248();
extern int func_800F4F4C();
extern int func_800F5140();
extern int func_800F6630();
extern int func_800F6C68();
extern int func_800F7864();
extern int func_800F824C();
extern int func_800F885C();
extern int func_800F9690();
extern int func_800FCC0C();

void func_800FCAB8(void)

{
  int iVar1;
  
  func_800F6630(0x7a);
  func_800F4248(1);
  iVar1 = func_800F4120(2);
  if (iVar1 != 0) {
    func_800F6630(0x7a);
    func_800F4248(0x1e);
    func_800F7864();
    func_800F9690();
    func_800F6C68(0x14fc66);
    func_800F5140();
    func_800F4F4C();
    func_800F9690();
    func_800F6C68(0x7f5800);
    func_800F824C(8);
    func_800F6C68(0x7f5820);
    func_800FCC0C();
    func_800F885C(0x7f5800);
    func_800F6630(7);
    func_800F885C(0x7f5820);
    func_800F6C68(0x7f5801);
    func_800F824C(8);
    func_800F6C68(0x7f5821);
    func_800FCC0C();
    func_800F885C(0x7f5801);
    func_800F6630(7);
    func_800F885C(0x7f5821);
    func_800F6C68(0x7f5810);
    func_800F824C(8);
    func_800F6C68(0x7f5830);
    func_800FCC0C();
    func_800F885C(0x7f5810);
    func_800F6630(7);
    func_800F885C(0x7f5830);
  }
  return;
}



