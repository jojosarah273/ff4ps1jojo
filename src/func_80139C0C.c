#include "common.h"
extern int func_800F5140();
extern int func_800F53C0();
extern int func_800F53D4();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F7270();
extern int func_800F824C();
extern int func_800F8768();
extern int func_800F8D6C();
extern int func_800F9200();
extern int func_800F93DC();
extern int func_8012D204();
extern int func_80134AF8();

void func_80139C0C(void)

{
  int iVar1;
  
  func_800F9200();
  func_800F824C(0x57);
  func_8012D204();
  iVar1 = func_800F53D4();
  if (iVar1 == 0) {
    func_800F8D6C(0xe5);
    func_80134AF8();
    iVar1 = func_800F53C0();
    if (iVar1 != 0) {
      func_800F6630(0x57);
      func_800F5140();
      func_800F824C(0x43);
      func_800F7270(0x43);
      func_800F654C(8);
      func_800F8768(0x1b4b);
    }
  }
  func_800F93DC();
  return;
}



