#include "common.h"
extern int func_800F4008();
extern int func_800F4248();
extern int func_800F5410();
extern int func_800F6364();
extern int func_800F8768();
extern int func_80167B48();

void func_80167DD4(void)

{
  func_80167B48();
  func_800F4248(0x7f);
  func_800F5410();
  func_800F8768(0xf398);
  func_800F6364();
  func_80167B48();
  func_800F4248(0x3f);
  func_800F5410();
  func_800F4008(0x20);
  func_800F8768(0xf398);
  func_800F6364();
  return;
}



