#include "common.h"
extern int func_800F654C();
extern int func_800F824C();
extern int func_80121BE4();

void func_80121FDC(void)

{
  func_800F654C(0xf8);
  func_800F824C(0x1e);
  func_800F654C(0xff);
  func_800F824C(0x1f);
  func_800F654C(0xfd);
  func_800F824C(0x20);
  func_80121BE4();
  return;
}



