#include "common.h"
extern int func_800F4008();
extern int func_800F4248();
extern int func_800F5140();
extern int func_800F53D4();
extern int func_800F5410();
extern int func_800F5480();
extern int func_800F5574();
extern int func_800F654C();
extern int func_800F6564();
extern int func_800F6630();
extern int func_800F71DC();
extern int func_800F8058();
extern int func_800F8188();
extern int func_800F81E8();
extern int func_800F8D00();
extern int func_800F8F74();

void func_801743E0(void)

{
  int iVar1;
  
  func_800F6564(0x1700);
  func_800F5574(3);
  iVar1 = func_800F53D4();
  if (iVar1 == 0) {
    func_800F8F74(0x211c);
    func_800F8F74(0x211c);
    func_800F8F74(0x211d);
    func_800F8F74(0x211d);
    func_800F654C(0xf0);
    func_800F81E8(0x7f5a00);
    func_800F81E8(0x7f5a03);
    func_800F6564(0x1704);
    func_800F5574(6);
    iVar1 = func_800F53D4();
    if (iVar1 == 0) {
      func_800F6630(0xad);
      func_800F5480();
      func_800F8058(0x10);
      func_800F5140();
      func_800F5410();
      func_800F4008(0);
      func_800F81E8(0x7f5a02);
      func_800F81E8(0x7f5a05);
      func_800F654C(0);
      func_800F81E8(0x7f5a01);
      func_800F654C(0xe0);
      func_800F81E8(0x7f5a04);
    }
    else {
      func_800F6630(0xad);
      func_800F5480();
      func_800F8058(0x10);
      func_800F4248(0xfe);
      func_800F5410();
      func_800F4008(0x22);
      func_800F81E8(0x7f5a02);
      func_800F81E8(0x7f5a05);
      func_800F654C(0);
      func_800F81E8(0x7f5a01);
      func_800F654C(0xe0);
      func_800F81E8(0x7f5a04);
    }
    func_800F654C(0x80);
    func_800F81E8(0x7f5a06);
    func_800F8F74(0x420c);
    func_800F654C(0x42);
    func_800F8188(0x4340);
    func_800F8188(0x4350);
    func_800F654C(0x1b);
    func_800F8188(0x4341);
    func_800F654C(0x1e);
    func_800F8188(0x4351);
    func_800F71DC(0x5a00);
    func_800F8D00(0x4342);
    func_800F8D00(0x4352);
    func_800F654C(0x7f);
    func_800F8188(0x4344);
    func_800F8188(0x4354);
    func_800F8188(0x4347);
    func_800F8188(0x4357);
  }
  return;
}



