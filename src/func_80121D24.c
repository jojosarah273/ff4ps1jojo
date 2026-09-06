#include "common.h"
extern int func_800F5140();
extern int func_800F6630();
extern int func_800F824C();
extern int func_80121C4C();

void func_80121D24(void)

{
  func_800F6630(0x65);
  func_800F5140();
  func_800F824C(0x43);
  func_800F6630(100);
  func_80121C4C();
  return;
}



