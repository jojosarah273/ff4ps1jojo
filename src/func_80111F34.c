#include "common.h"
extern int func_800F5E48();
extern int func_800F7170();
extern int func_800F7210();
extern int func_800F8D00();
extern int func_80111FCC();
extern int func_8011EA5C();

void func_80111F34(void)

{
  int iVar1;
  
  func_800F7210(0x172c);
  iVar1 = func_800F7170(2);
  if (iVar1 == 0) {
    func_800F5E48();
    func_800F5E48();
    func_800F5E48();
    func_800F8D00(0x172c);
    func_80111FCC();
  }
  func_8011EA5C();
  return;
}



