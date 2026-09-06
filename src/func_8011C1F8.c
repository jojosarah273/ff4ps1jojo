#include "common.h"
extern int func_800F53D4();
extern int func_800F5958();
extern int func_800F6364();
extern int func_800F63BC();
extern int func_800F654C();
extern int func_800F6D70();
extern int func_800F71DC();
extern int func_800F885C();
extern int func_800F9200();
extern int func_800F9448();

void func_8011C1F8(void)

{
  int iVar1;
  
  func_800F9200();
  func_800F9448();
  func_800F71DC(0);
  do {
    func_800F6D70(0);
    func_800F885C(0x7f4800);
    func_800F63BC();
    func_800F6364();
    func_800F5958(0x200);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  func_800F654C(0);
  func_800F9200();
  func_800F9448();
  return;
}



