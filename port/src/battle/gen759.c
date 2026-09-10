/* FF4 source-port — interpreted module for fn_1x4a9b0.
 * Ground truth: src/fn_1x4a9b0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"




void fn_1x4a9b0(void)

{
  int iVar1;
  
  fn_1x48e08();
  latch(0x18);
  fn_1x48e80();
  wnd_open(4);
  do {
    latch(0x80);
    battle_rows_twin_two_f38_b04_pair();
    cell_step();
    poll_t(8);
    iVar1 = io_just();
  } while (iVar1 == 0);
  fn_1x4c96c();
  latch(4);
  txt_draw(0xf2a0);
  return;
}



