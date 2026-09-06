#include "common.h"
extern int func_800F53D4();
extern int func_800F5A90();
extern int func_800F6364();
extern int func_800F63BC();
extern int func_800F654C();
extern int func_800F6C68();
extern int func_800F71DC();
extern int func_800F7500();
extern int func_800F8960();
extern int func_800F8EBC();
extern int func_801183B0();
extern int func_80150A30();

void func_800FF0AC(void)

{
  int iVar1;
  
  func_800F71DC(0);
  func_800F7500(0);
  do {
    func_800F6C68(0xfa900);
    func_800F8960(0x1000);
    func_800F6364();
    func_800F63BC();
    func_800F5A90(0x14);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  func_800F7500(0);
  do {
    func_800F6C68(0xfa900);
    func_800F8960(0x102d);
    func_800F6364();
    func_800F63BC();
    func_800F5A90(3);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  func_800F7500(0);
  do {
    func_800F6C68(0xfa900);
    func_800F8960(0x1037);
    func_800F6364();
    func_800F63BC();
    func_800F5A90(9);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  func_800F7500(0);
  func_800F8EBC(0x3d);
  func_801183B0();
  func_800F654C(0);
  func_80150A30();
  return;
}



