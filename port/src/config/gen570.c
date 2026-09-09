/* FF4 source-port — interpreted module for func_801255E8.
 * Ground truth: src/func_801255E8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F5C64();
extern int func_800F5E48();
extern int func_800F63BC();
extern int func_800F6558();
extern int func_800F71DC();
extern int func_800F89D4();
extern int func_800F9644();
extern int func_800F9660();

void func_801255E8(void)

{
  int iVar1;
  
  wnd_open(10);
  row_prep(0x20);
  do {
    row_sync2(0xf0ff);
    func_800F89D4(0);
    row_sync2(0x3000);
    func_800F89D4(2);
    step2();
    step2();
    step2();
    step2();
    func_800F5E48();
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  row_prep_close();
  return;
}



