#include "common.h"
extern int func_800F3D48();
extern int func_800F5B8C();
extern int func_800F5DA0();
extern int func_800F6364();
extern int func_800F63BC();
extern int func_800F6630();
extern int func_800F6C68();
extern int func_800F8960();
extern int func_801245B4();

void func_8012371C(void)

{
  int iVar1;
  
  do {
    func_800F6C68(0xfa764);
    func_801245B4();
    func_800F8960(0);
    func_800F3D48();
    func_800F8960(0x40);
    func_800F63BC();
    func_800F6630(0x34);
    func_800F8960(0);
    func_800F8960(0x40);
    func_800F63BC();
    func_800F6364();
    func_800F5DA0(0x45);
    iVar1 = func_800F5B8C(0x202);
  } while (iVar1 != 0);
  return;
}



