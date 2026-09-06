#include "common.h"
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F824C();
extern int func_800F8D6C();
extern int func_800F9200();
extern int func_800F9330();
extern int func_800F93DC();
extern int func_800F95A0();
extern int func_800F971C();
extern int func_801240A8();

void func_8012102C(void)

{
  func_801240A8();
  func_800F9200();
  func_800F9330();
  func_800F71DC(0xa600);
  func_800F8D6C(0x29);
  func_800F71DC(0x6800);
  func_800F8D6C(0x35);
  func_800F971C();
  func_800F824C(0xc3);
  func_800F654C(0x20);
  func_800F824C(0x34);
  func_800F95A0();
  func_800F93DC();
  return;
}



