#include "common.h"
extern int func_800F6434();
extern int func_800F6564();
extern int func_800F71DC();
extern int func_800F7500();
extern int func_8016B530();

void func_8016B470(void)

{
  int iVar1;
  
  func_800F71DC(0);
  func_800F7500(8);
  func_8016B530();
  func_800F71DC(2);
  func_800F7500(0xc);
  func_8016B530();
  func_800F71DC(4);
  func_800F7500(0x10);
  func_8016B530();
  func_800F71DC(6);
  func_800F7500(0x14);
  func_8016B530();
  func_800F71DC(8);
  func_800F7500(0x18);
  func_8016B530();
  func_800F6564(0x5b);
  iVar1 = func_800F6434(2);
  if (iVar1 == 0) {
    func_800F71DC(10);
    func_800F7500(0x1c);
    func_8016B530();
  }
  return;
}



