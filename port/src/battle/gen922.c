/* FF4 source-port — interpreted module for func_8014E75C.
 * Ground truth: src/func_8014E75C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_8007259C();
extern int func_800F5C64();
extern int func_800F5E48();
extern int func_800F71DC();
extern int func_800F9330();
extern int func_800F95A0();
extern int func_80148CAC();
extern int func_8014E7C4();

void func_8014E75C(void)

{
  int iVar1;
  
  wnd_open(0x10);
  do {
    row_open();
    func_8014E7C4();
    func_8007259C();
    func_8007259C();
    row_close();
    func_800F5E48();
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  func_80148CAC();
  return;
}



