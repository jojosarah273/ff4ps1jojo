/* FF4 source-port — interpreted module for fn_1x40a0c.
 * Ground truth: src/fn_1x40a0c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_80074B50();
extern int func_8009A0E0();


void fn_1x40a0c(void)

{
  fn_1x40a5c();
  func_80074B50();
  event_c3c_b04_a70_rows_with_a2_s0();
  latch(0x59);
  battle_row_d568();
  latch(2);
  func_8009A0E0();
  return;
}



