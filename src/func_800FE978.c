#include "common.h"
extern int func_800F53D4();
extern int func_800F5A90();
extern int func_800F6364();
extern int func_800F63BC();
extern int func_800F654C();
extern int func_800F6B68();
extern int func_800F7500();
extern int func_800F8960();
extern int func_800F9200();
extern int func_800F9448();

void func_800FE978(void)

{
  int iVar1;
  
  func_800F9200();
  func_800F9448();
  func_800F7500(0);
  do {
    func_800F6B68(0);
    func_800F8960(0xcdb);
    func_800F6364();
    func_800F63BC();
    func_800F5A90(0x100);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  func_800F654C(0);
  func_800F9200();
  func_800F9448();
  return;
}



