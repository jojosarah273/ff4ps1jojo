#include "common.h"
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F8188();
extern int func_800F824C();
extern int func_800F8FB8();
extern int func_800FD718();
extern int func_801030F8();
extern int func_801034E0();
extern int func_8017559C();

void func_801033E0(void)

{
  int iVar1;
  
  func_800F654C(5);
  func_800F8188(0x1704);
  func_800F654C(3);
  func_800F824C(0xac);
  func_800F8188(0x1705);
  func_800F6630(0xb1);
  iVar1 = func_800F6434(2);
  if (iVar1 == 0) {
    func_800F6630(0xe1);
    iVar1 = func_800F6434(2);
    if (iVar1 == 0) {
      func_800F654C(0x20);
      func_800F824C(0xad);
      func_800F654C(0x10);
      func_800F824C(0xb8);
      func_8017559C();
      func_800F654C(0xf);
      func_800F8188(0x6fd);
    }
    else {
      func_801030F8();
      func_800F654C(0x20);
      func_800F824C(0x79);
      func_800F654C(0xf);
      func_800F8188(0x6fd);
      func_801034E0();
    }
  }
  else {
    func_800FD718();
    func_800F8FB8(0x79);
    func_801034E0();
  }
  return;
}



