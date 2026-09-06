#include "common.h"
extern int func_800F3D48();
extern int func_800F5B8C();
extern int func_800F5DA0();
extern int func_800F6364();
extern int func_800F63BC();
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6564();
extern int func_800F6B68();
extern int func_800F71DC();
extern int func_800F7500();
extern int func_800F824C();
extern int func_800F8960();
extern int func_800F9330();
extern int func_800F939C();
extern int func_800F95A0();
extern int func_800F960C();
extern int func_801245B4();

void func_80129C54(void)

{
  int iVar1;
  
  func_800F9330();
  func_800F939C();
  func_800F6564(0x1b49);
  iVar1 = func_800F6434(2);
  if (iVar1 == 0) {
    func_800F7500(0x152);
  }
  else {
    func_800F7500(0xe0);
  }
  func_800F71DC(0x1b0a);
  func_800F654C(6);
  func_800F824C(0x45);
  do {
    func_800F6B68(0);
    func_800F6364();
    func_801245B4();
    func_800F8960(0xc600);
    func_800F3D48();
    func_800F8960(0xc640);
    func_800F63BC();
    func_800F63BC();
    func_800F5DA0(0x45);
    iVar1 = func_800F5B8C(0x202);
  } while (iVar1 != 0);
  func_800F960C();
  func_800F95A0();
  return;
}



