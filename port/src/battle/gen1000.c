/* FF4 source-port — interpreted module for battle_row_34c4.
 * Ground truth: src/battle_row_34c4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"



extern int func_8014B9FC();

void battle_row_34c4(void)

{
  txt_set(0x34c4);
  row_read(0x80);
  cell_put(0);
  txt_set(0x34c5);
  cell_put(1);
  func_8014B9FC();
  return;
}



