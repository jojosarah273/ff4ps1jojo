/* FF4 source-port — interpreted module for func_80103B38.
 * Ground truth: src/func_80103B38.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_80103EAC();
extern int func_80103F00();

void func_80103B38(void)

{
  int iVar1;
  
  latch(0x28);
  cell_put(0x79);
  do {
    func_80103EAC();
    shop_buy_run();
    wnd_fx_7d_b();
    func_80103F00();
    poll_pair(0x79);
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  return;
}



