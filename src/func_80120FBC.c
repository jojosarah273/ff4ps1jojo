#include "common.h"
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F824C();
extern int func_800F8D6C();
extern int func_800F8FB8();
extern int func_800F9200();
extern int func_800F9330();
extern int func_800F93DC();
extern int func_800F95A0();

void func_80120FBC(void)

{
  func_800F9200();
  func_800F9330();
  func_800F71DC(0xb600);
  func_800F8D6C(0x29);
  func_800F71DC(0x6000);
  func_800F8D6C(0x35);
  func_800F654C(1);
  func_800F824C(0xc3);
  func_800F8FB8(0x34);
  func_800F95A0();
  func_800F93DC();
  return;
}



