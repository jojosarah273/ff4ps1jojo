/* FF4 source-port — interpreted module for event_row_38e6.
 * Ground truth: src/event_row_38e6.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_80074B50();
extern int func_8009A018();

void event_row_38e6(void)

{
  func_80074B50();
  event_c3c_b04_a70_rows_with_a2_s0();
  cell_clear_bank(0x38e6);
  func_8009A018();
  return;
}



