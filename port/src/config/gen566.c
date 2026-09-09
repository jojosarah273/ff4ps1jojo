/* FF4 source-port — interpreted module for func_80129DFC.
 * Ground truth: src/func_80129DFC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F5C64();
extern int func_800F5DA0();
extern int func_800F5E48();
extern int func_800F62BC();
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F7270();
extern int func_800F81E8();
extern int func_800F8D6C();
extern int func_801266C8();

void func_80129DFC(void)

{
  int iVar1;
  
  wnd_open(4);
  do {
    key_page(0x90);
    func_801266C8();
    func_800F5E48();
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  page(0x90);
  tail(0x9c);
  latch(0x1c);
  func_800F81E8(0x212c);
  wnd_open(4);
  do {
    poll_pair(0x9c);
    func_801266C8();
    func_800F5E48();
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  return;
}



