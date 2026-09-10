/* FF4 source-port — interpreted module for fn_1x19c24.
 * Ground truth: src/fn_1x19c24.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x19c24(void)

{
  int iVar1;
  
  latch(2);
  cell_put(0x79);
  do {
    key_page(0xc4);
    wnd_fx_7d_b();
    poll_pair(0x79);
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  battle_wndfx_run();
  return;
}



