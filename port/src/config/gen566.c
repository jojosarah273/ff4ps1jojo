/* FF4 source-port — interpreted module for func_80129DFC.
 * Ground truth: src/func_80129DFC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"









extern int func_801266C8();

void func_80129DFC(void)

{
  int iVar1;
  
  wnd_open(4);
  do {
    key_page(0x90);
    func_801266C8();
    cell_set50_from54();
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  page(0x90);
  tail(0x9c);
  latch(0x1c);
  cell_pull_c8_lo(0x212c);
  wnd_open(4);
  do {
    poll_pair(0x9c);
    func_801266C8();
    cell_set50_from54();
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  return;
}



