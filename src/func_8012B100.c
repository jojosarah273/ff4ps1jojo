#include "common.h"
extern int func_800F5C64();
extern int func_800F5E48();
extern int func_800F63BC();
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F8960();

void func_8012B100(void)

{
  int iVar1;
  
  func_800F71DC(4);
  do {
    func_800F654C(0xff);
    func_800F8960(0);
    func_800F63BC();
    func_800F654C(0xf0);
    func_800F8960(0);
    func_800F63BC();
    func_800F5E48();
    iVar1 = func_800F5C64(0x202);
  } while (iVar1 != 0);
  return;
}



