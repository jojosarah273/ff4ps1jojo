#include "common.h"
extern int func_800F654C();
extern int func_800F824C();
extern int func_80121A74();

void func_80121F8C(void)

{
  func_800F654C(0xf8);
  func_800F824C(0x1e);
  func_800F654C(0xff);
  func_800F824C(0x1f);
  func_800F654C(0xfd);
  func_800F824C(0x20);
  func_80121A74();
  return;
}



