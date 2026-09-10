/* FF4 source-port — interpreted module for fn_1x4a8e8.
 * Ground truth: src/fn_1x4a8e8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800996A8();


void fn_1x4a8e8(void)

{
  wnd_open(0x10);
  func_800996A8();
  cell_clear_bank(0xef87);
  battle_row_f2a0();
  return;
}



