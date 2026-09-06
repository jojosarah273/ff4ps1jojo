#include "common.h"
extern int func_800F5EA0();
extern int func_800F6764();
extern int func_800F7500();
extern int func_800F8378();
extern int func_800F9644();
extern int func_800F9660();
extern int func_8012C0A8();

void func_8012C4F8(void)

{
  int iVar1;
  
  iVar1 = func_8012C0A8();
  if (iVar1 != 2) {
    func_800F9644(0x20);
    func_800F7500(9);
    func_800F6764(0x60);
    func_800F5EA0();
    func_800F5EA0();
    func_800F8378(0x60);
    func_800F7500(0xd);
    func_800F6764(0x60);
    func_800F5EA0();
    func_800F5EA0();
    func_800F8378(0x60);
    func_800F9660(0x20);
  }
  return;
}



