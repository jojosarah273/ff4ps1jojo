#include "common.h"
extern int func_800F4064();
extern int func_800F5410();
extern int func_800F5480();
extern int func_800F5B8C();
extern int func_800F5DA0();
extern int func_800F654C();
extern int func_800F6658();
extern int func_800F71DC();
extern int func_800F80D0();
extern int func_800F824C();
extern int func_800F8274();
extern int func_800F8D6C();
extern int func_800F9644();
extern int func_800F9660();
extern int func_8011EE34();
extern int func_8011F320();

void func_80120CA4(void)

{
  int iVar1;
  
  func_800F654C(0x19);
  func_800F824C(0x45);
  func_800F9644(0x20);
  func_800F6658(0x35);
  func_800F5410();
  func_800F4064(0x600);
  func_800F8274(0x1d);
  func_800F6658(0x29);
  func_800F5410();
  func_800F4064(0xc00);
  func_800F8274(0x1f);
  func_800F9660(0x20);
  func_800F654C(0x7e);
  func_800F824C(0x21);
  func_800F71DC(0x80);
  func_800F8D6C(0x22);
  do {
    func_8011F320();
    func_8011EE34();
    func_800F9644(0x20);
    func_800F6658(0x1d);
    func_800F5480();
    func_800F80D0(0x40);
    func_800F8274(0x1d);
    func_800F6658(0x1f);
    func_800F5480();
    func_800F80D0(0x80);
    func_800F8274(0x1f);
    func_800F9660(0x20);
    func_800F5DA0(0x45);
    iVar1 = func_800F5B8C(0x202);
  } while (iVar1 != 0);
  return;
}



