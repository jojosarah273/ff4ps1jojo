#include "common.h"
extern int func_800F4120();
extern int func_800F4370();
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F5B8C();
extern int func_800F5DA0();
extern int func_800F62BC();
extern int func_800F654C();
extern int func_800F6564();
extern int func_800F6630();
extern int func_800F8188();
extern int func_800F824C();
extern int func_800F8FB8();
extern int func_800FE7B0();

void func_800FD914(void)

{
  int iVar1;
  
  func_800F824C(0x82);
  func_800F8FB8(0x79);
  func_800F6630(0xca);
  func_800F5574(2);
  iVar1 = func_800F53D4();
  if (iVar1 == 0) {
    func_800F654C(0xf);
    func_800F824C(0x80);
    do {
      do {
        func_800FE7B0();
        func_800F6630(0x80);
        func_800F8188(0x2100);
        func_800F6564(0x1700);
        func_800F5574(3);
        iVar1 = func_800F53D4();
        if (iVar1 == 0) {
          func_800F654C(0x30);
          func_800F8188(0x420c);
        }
        func_800F62BC(0x79);
        func_800F6630(0x79);
        func_800F4370(0x82);
        iVar1 = func_800F4120(0x202);
      } while (iVar1 != 0);
      func_800F5DA0(0x80);
      iVar1 = func_800F5B8C(0x8080);
    } while (iVar1 != 0);
    func_800F8FB8(0x80);
  }
  return;
}



