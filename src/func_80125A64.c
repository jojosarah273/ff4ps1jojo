#include "common.h"
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F61E8();
extern int func_800F971C();
extern int func_8011EF0C();
extern int func_8011F320();
extern int func_80125ACC();
extern int func_80125F38();

void func_80125A64(void)

{
  int iVar1;
  
  func_800F971C();
  do {
    func_8011F320();
    func_80125ACC();
    func_80125F38();
    func_800F61E8();
    func_800F5574(5);
    iVar1 = func_800F53D4();
  } while (iVar1 == 0);
  func_8011F320();
  func_8011EF0C();
  return;
}



