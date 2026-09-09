/* FF4 source-port — interpreted module for func_8013B840.
 * Ground truth: src/func_8013B840.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void func_8013B840(void)

{
  battle_put43();
  cell_push_c8(0x14ff9d);
  cell_cur_save54_b();
  txt_cell(0);
  row_read(0x3f);
  cell_flags_tick2();
  return;
}



