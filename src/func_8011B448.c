#include "common.h"
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F6364();
extern int func_800F6C68();
extern int func_800F7270();
extern int func_800F8D6C();

void func_8011B448(void)

{
  int iVar1;
  
  func_800F7270(0xbc);
  do {
    func_800F6364();
    func_800F6C68(0x139c00);
    func_800F5574(0xff);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  func_800F6364();
  func_800F8D6C(0xbc);
  return;
}



