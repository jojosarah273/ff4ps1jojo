/* FF4 source-port — interpreted module for fn_1x29d64.
 * Ground truth: src/fn_1x29d64.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"









extern int func_801266C8();

void fn_1x29d64(void)

{
  int iVar1;
  
  wnd_open(4);
  do {
    key_page(0x9c);
    func_801266C8();
    cell_set50_from54();
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  page(0x9c);
  tail(0x90);
  latch(0x19);
  cell_pull_c8_lo(0x212c);
  wnd_open(4);
  do {
    poll_pair(0x90);
    func_801266C8();
    cell_set50_from54();
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  return;
}



