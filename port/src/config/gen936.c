/* FF4 source-port — interpreted module for fn_1x2e700.
 * Ground truth: src/fn_1x2e700.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x2e700(void)

{
  int iVar1;
  
  wnd_open(0x18);
  do {
    poll_pair(0xd7);
    key_page(0xd5);
    fn_1x2e7cc();
    midrow_pad88_run();
    cell_set50_from54();
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  return;
}



