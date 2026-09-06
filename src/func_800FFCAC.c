#include "common.h"
extern int func_800F4120();
extern int func_800F4248();
extern int func_800F53C0();
extern int func_800F53D4();
extern int func_800F5480();
extern int func_800F5958();
extern int func_800F62BC();
extern int func_800F6434();
extern int func_800F64EC();
extern int func_800F654C();
extern int func_800F6558();
extern int func_800F6630();
extern int func_800F6B68();
extern int func_800F6BE0();
extern int func_800F71DC();
extern int func_800F80D0();
extern int func_800F87DC();
extern int func_800F8FB8();
extern int func_800F9644();
extern int func_800F9660();
extern int func_800FD804();
extern int func_80117DF8();

void func_800FFCAC(void)

{
  int iVar1;
  
  func_800F8FB8(0xc1);
  func_800F6630(0xa2);
  func_800F4248(1);
  iVar1 = func_800F4120(2);
  if (iVar1 == 0) {
    func_800F71DC(0);
    do {
      func_800F6B68(0x1000);
      iVar1 = func_800F6434(2);
      if (iVar1 == 0) {
        func_800F6B68(0x1003);
        iVar1 = func_800F6434(0x80);
        if (iVar1 == 0) {
          func_800F6B68(0x1004);
          func_800F4248(0x40);
          iVar1 = func_800F4120(0x202);
          if (iVar1 == 0) {
            func_800F62BC(0xc1);
            func_800F9644(0x20);
            func_800F6BE0(0x1007);
            iVar1 = func_800F64EC(2);
            if (iVar1 == 0) {
              func_800F5480();
              func_800F80D0(0x32);
              func_800F87DC(0x1007);
              iVar1 = func_800F53D4();
              if ((iVar1 != 0) || (iVar1 = func_800F53C0(), iVar1 == 0)) {
                func_800F6558(1);
                func_800F87DC(0x1007);
              }
            }
            func_800F6558(0);
            func_800F9660(0x20);
          }
        }
      }
      func_80117DF8();
      func_800F5958(0x140);
      iVar1 = func_800F53D4();
    } while (iVar1 == 0);
  }
  func_800F6630(0xc1);
  iVar1 = func_800F6434(2);
  if (iVar1 == 0) {
    func_800F654C(0x7b);
    func_800FD804();
  }
  return;
}



