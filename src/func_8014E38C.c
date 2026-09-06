#include "common.h"
extern int func_800F6434();
extern int func_800F6564();
extern int func_800F8188();
extern int func_800F8F74();
extern int func_800F971C();

void func_8014E38C(void)

{
  int iVar1;
  
  func_800F971C();
  func_800F8188(0xf42e);
  func_800F8188(0xefc7);
  func_800F8188(0xefd7);
  func_800F8188(0xefe7);
  func_800F8188(0xeff7);
  func_800F8188(0xf007);
  func_800F8188(0xf281);
  func_800F8188(0xf283);
  func_800F8188(0xf451);
  func_800F6564(0xf44e);
  iVar1 = func_800F6434(2);
  if (iVar1 == 0) {
    func_800F8F74(0xef87);
  }
  func_800F6564(0xf279);
  func_800F8188(0xf466);
  return;
}



