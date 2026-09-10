/* FF4 source-port — interpreted module for cell_0xfe5d4.
 * Ground truth: src/cell_0xfe5d4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F8EBC();

void cell_0xfe5d4(void)

{
  latch(0x40);
  cell_0xfe634();
  row_info(0x6e);
  latch(0);
  cell_0xfe634();
  row_info(0x70);
  latch(0x80);
  cell_0xfe634();
  row_info(0x72);
  return;
}



