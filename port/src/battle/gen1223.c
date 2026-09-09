/* FF4 source-port — interpreted module for func_8014A8E8.
 * Ground truth: src/func_8014A8E8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800996A8();


void func_8014A8E8(void)

{
  wnd_open(0x10);
  func_800996A8();
  cell_clear_bank(0xef87);
  battle_row_f2a0();
  return;
}



