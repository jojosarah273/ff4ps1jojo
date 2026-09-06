#include "common.h"
extern int func_80074B50();
extern int func_8009A0E0();
extern int func_800F654C();
extern int func_8013F124();
extern int func_80140A5C();
extern int func_8014D528();

void func_80140A0C(void)

{
  func_80140A5C();
  func_80074B50();
  func_8013F124();
  func_800F654C(0x59);
  func_8014D528();
  func_800F654C(2);
  func_8009A0E0();
  return;
}



