#include "common.h"
extern int func_800F53D4();
extern int func_800F5A90();
extern int func_800F5EA0();
extern int func_800F6DE8();
extern int func_800F7500();
extern int func_800F89D4();
extern int func_800F9644();
extern int func_800F9660();
extern int func_800F971C();

void func_8013D690(void)

{
  int iVar1;
  
  func_800F7500(0x40);
  func_800F9644(0x20);
  do {
    func_800F6DE8(0x340);
    func_800F89D4(0x344);
    func_800F6DE8(0x342);
    func_800F89D4(0x346);
    func_800F5EA0();
    func_800F5EA0();
    func_800F5EA0();
    func_800F5EA0();
    func_800F5A90(0xfffc);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  func_800F971C();
  func_800F9660(0x20);
  return;
}



