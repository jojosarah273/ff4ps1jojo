#include "common.h"
extern int func_800F53D4();
extern int func_800F5448();
extern int func_800F5574();
extern int func_800F62BC();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F8188();
extern int func_800F824C();
extern int func_800F8FB8();
extern int func_800FE778();

void func_800FEC74(void)

{
  int iVar1;
  
  func_800F654C(1);
  func_800F824C(0xd9);
  func_800F654C(7);
  func_800F8188(0x212c);
  func_800F654C(1);
  func_800F8188(0x212d);
  func_800F8FB8(0x7a);
  func_800F8FB8(0x79);
  func_800F654C(0x81);
  func_800F8188(0x4200);
  func_800F5448();
  do {
    func_800FE778();
    do {
      func_800F6630(0x7f);
      func_800F5574(2);
      iVar1 = func_800F53D4();
    } while (iVar1 == 0);
    func_800F62BC(0x79);
    func_800F62BC(0x79);
    func_800F6630(0x79);
    func_800F5574(0x20);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  return;
}



