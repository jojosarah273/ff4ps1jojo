#include "common.h"
extern int func_800F4008();
extern int func_800F4248();
extern int func_800F53D4();
extern int func_800F5410();
extern int func_800F5574();
extern int func_800F5B8C();
extern int func_800F5DA0();
extern int func_800F62BC();
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F71DC();
extern int func_800F7270();
extern int func_800F824C();
extern int func_800F8D00();
extern int func_800F8D6C();
extern int func_800F8F74();
extern int func_800F8FB8();
extern int func_800FCC84();
extern int func_80109D68();

void func_80109B08(void)

{
  int iVar1;
  
  func_800F6630(0xed);
  iVar1 = func_800F6434(0x202);
  if (iVar1 != 0) {
    func_800F8FB8(0xed);
    func_800F6630(0xba);
    func_800F4248(3);
    func_800F824C(0x13);
    func_800F654C(4);
    func_800F824C(0x12);
    func_800F6630(0x13);
    func_800F5410();
    func_800F4008(0x2c);
    func_800F824C(0x13);
    func_800F71DC(0x774);
    func_800F8D6C(0x14);
    func_800F71DC(0x834);
    func_800F8D6C(0x16);
    func_800F8F74(0x2115);
    func_800FCC84();
    func_800F8F74(0x4300);
    func_800F654C(4);
    func_800F824C(0x11);
    do {
      func_800F7270(0x16);
      func_800F8D00(0x4302);
      func_800F7270(0x12);
      func_800F8D00(0x2116);
      func_800F71DC(0x18);
      func_800F8D00(0x4305);
      func_80109D68();
      func_800F6630(0x12);
      func_800F5410();
      func_800F4008(0x20);
      func_800F824C(0x12);
      func_800F6630(0x13);
      func_800F4008(0);
      func_800F824C(0x13);
      func_800F8F74(0x420b);
      func_800F7270(0x14);
      func_800F8D00(0x4302);
      func_800F7270(0x12);
      func_800F8D00(0x2116);
      func_800F71DC(0x18);
      func_800F8D00(0x4305);
      func_80109D68();
      func_800F6630(0x12);
      func_800F5410();
      func_800F4008(0x20);
      func_800F824C(0x12);
      func_800F6630(0x13);
      func_800F4008(0);
      func_800F5574(0x30);
      iVar1 = func_800F53D4();
      if (iVar1 != 0) {
        func_800F654C(0x2c);
      }
      func_800F824C(0x13);
      func_800F6630(0x14);
      func_800F5410();
      func_800F4008(0x18);
      func_800F824C(0x14);
      func_800F6630(0x15);
      func_800F4008(0);
      func_800F824C(0x15);
      func_800F6630(0x16);
      func_800F5410();
      func_800F4008(0x18);
      func_800F824C(0x16);
      func_800F6630(0x17);
      func_800F4008(0);
      func_800F824C(0x17);
      func_800F5DA0(0x11);
      iVar1 = func_800F5B8C(2);
    } while (iVar1 == 0);
    func_800F62BC(0xba);
  }
  return;
}



