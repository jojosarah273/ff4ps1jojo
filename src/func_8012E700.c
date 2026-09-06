#include "common.h"
extern int func_800F5C64();
extern int func_800F5DA0();
extern int func_800F5E48();
extern int func_800F62BC();
extern int func_800F71DC();
extern int func_8011F684();
extern int func_8012E7CC();

void func_8012E700(void)

{
  int iVar1;
  
  func_800F71DC(0x18);
  do {
    func_800F5DA0(0xd7);
    func_800F62BC(0xd5);
    func_8012E7CC();
    func_8011F684();
    func_800F5E48();
    iVar1 = func_800F5C64(0x202);
  } while (iVar1 != 0);
  return;
}



