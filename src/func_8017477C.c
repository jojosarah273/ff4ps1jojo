#include "common.h"
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F5A90();
extern int func_800F62BC();
extern int func_800F6364();
extern int func_800F63BC();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F6C68();
extern int func_800F71DC();
extern int func_800F7500();
extern int func_800F8960();
extern int func_800F8FB8();

void func_8017477C(void)

{
  int iVar1;
  
  func_800F71DC(0);
  func_800F7500(0);
  func_800F8FB8(7);
  do {
    func_800F6C68(0xfc8c0);
    func_800F5574(0xff);
    iVar1 = func_800F53D4();
    if (iVar1 == 0) {
      func_800F8960(0x1560);
      func_800F63BC();
      func_800F62BC(7);
      func_800F6630(7);
      func_800F5574(0x18);
      iVar1 = func_800F53D4();
      if (iVar1 != 0) {
        func_800F8FB8(7);
      }
    }
    else {
      do {
        func_800F654C(0);
        func_800F8960(0x1560);
        func_800F63BC();
        func_800F62BC(7);
        func_800F6630(7);
        func_800F5574(0x18);
        iVar1 = func_800F53D4();
      } while (iVar1 == 0);
      func_800F8FB8(7);
    }
    func_800F6364();
    func_800F5A90(0x138);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  return;
}



