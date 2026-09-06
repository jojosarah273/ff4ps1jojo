#include "common.h"
extern int func_800F4120();
extern int func_800F4248();
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F6B68();
extern int func_800F7270();
extern int func_800F824C();
extern int func_80152CDC();

void func_8015C54C(void)

{
  int iVar1;
  
  func_800F6630(0xd0);
  func_800F5574(0xff);
  iVar1 = func_800F53D4();
  if (iVar1 == 0) {
    func_80152CDC();
    func_800F7270(0xa6);
    func_800F6B68(0x2003);
    func_800F4248(0xc0);
    iVar1 = func_800F4120(0x202);
    if (iVar1 == 0) {
      func_800F6B68(0x2004);
      func_800F4248(0x3c);
      iVar1 = func_800F4120(0x202);
      if (iVar1 == 0) {
        func_800F6B68(0x2005);
        func_800F4248(0xc6);
        iVar1 = func_800F4120(2);
        if (iVar1 != 0) {
          return;
        }
      }
    }
  }
  func_800F654C(0xff);
  func_800F824C(0xd0);
  return;
}



