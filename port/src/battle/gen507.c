/* FF4 source-port — interpreted module for fn_1x147c0.
 * Ground truth: src/fn_1x147c0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x147c0(void)

{
  int iVar1;
  
  wnd_open(0x100);
  tail(0x2c);
  wnd_open(0x70);
  tail(0x2e);
  wnd_open(0xd0);
  tail(0x89);
  do {
    fn_1x14d18();
    page(0x2c);
    cell_set50_from54();
    tail(0x2c);
    poll_t(0x70);
    iVar1 = io_go();
    if (iVar1 == 0) {
      wnd_open(0x70);
      tail(0x2c);
    }
    page(0x89);
    cell_set50_from54();
    tail(0x89);
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  battle_wndfx_run();
  return;
}



