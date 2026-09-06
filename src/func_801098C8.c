#include "common.h"
extern int func_800F5C64();
extern int func_800F5EA0();
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F71DC();
extern int func_800F7500();
extern int func_800F8188();
extern int func_800F8D00();
extern int func_800F8F74();
extern int func_800F8FB8();
extern int func_800FCC84();
extern int func_800FCCBC();

void func_801098C8(void)

{
  int iVar1;
  
  func_800F6630(0xcb);
  iVar1 = func_800F6434(2);
  if (iVar1 != 0) {
    func_800F6630(0xeb);
    iVar1 = func_800F6434(0x202);
    if (iVar1 != 0) {
      func_800F8FB8(0xeb);
      func_800F654C(0x80);
      func_800F8188(0x2115);
      func_800FCC84();
      func_800F654C(1);
      func_800F8188(0x4300);
      func_800F71DC(0x2840);
      func_800F8D00(0x2116);
      func_800F71DC(0xf6d6);
      func_800F8D00(0x4302);
      func_800F654C(0x14);
      func_800F8188(0x4304);
      func_800F71DC(0x40);
      func_800F8D00(0x4305);
      func_800FCCBC();
      func_800F71DC(0x2860);
      func_800F8D00(0x2116);
      func_800F8F74(0x420b);
      func_800F71DC(0xf716);
      func_800F8D00(0x4302);
      func_800F71DC(0x40);
      func_800F8D00(0x4305);
      func_800FCCBC();
      func_800F7500(0x20);
      func_800F71DC(0x2c00);
      func_800F8D00(0x2116);
      do {
        func_800F8F74(0x420b);
        func_800F71DC(0xf756);
        func_800F8D00(0x4302);
        func_800F71DC(0x40);
        func_800F8D00(0x4305);
        func_800FCCBC();
        func_800F5EA0();
        iVar1 = func_800F5C64(0x202);
      } while (iVar1 != 0);
    }
  }
  return;
}



