/* FF4 source-port — interpreted module for func_8012B100.
 * Ground truth: src/func_8012B100.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F5C64();
extern int func_800F5E48();
extern int func_800F63BC();
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F8960();

void func_8012B100(void)

{
  int iVar1;
  
  wnd_open(4);
  do {
    latch(0xff);
    func_800F8960(0);
    step2();
    latch(0xf0);
    func_800F8960(0);
    step2();
    func_800F5E48();
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  return;
}



