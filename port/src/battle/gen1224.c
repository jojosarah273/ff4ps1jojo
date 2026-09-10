/* FF4 source-port — interpreted module for fn_1x4a810.
 * Ground truth: src/fn_1x4a810.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800996A8();





void fn_1x4a810(void)

{
  battle_rows_d5a0_row_gate_xff_pick();
  battle_rows_x1802_text_c_c664_rows();
  fn_1x409e4();
  wnd_open(0x20);
  func_800996A8();
  cell_clear_bank(0xef87);
  battle_rows_x1802_text_c_c81c_rows();
  return;
}



