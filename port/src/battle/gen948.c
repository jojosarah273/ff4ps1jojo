/* FF4 source-port — interpreted module for func_80113C04.
 * Ground truth: src/func_80113C04.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"





extern int func_801714C4();

void func_80113C04(void)

{
  int iVar1;
  
  cell_pull_c8(0x300);
  row_page(0x23);
  row_read(1);
  iVar1 = sel(2);
  if (iVar1 == 0) {
    latch(0);
    func_801714C4();
  }
  return;
}



