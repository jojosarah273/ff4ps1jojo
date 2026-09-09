/* FF4 source-port — interpreted module for func_80113C54.
 * Ground truth: src/func_80113C54.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"






void func_80113C54(void)

{
  int iVar1;
  
  page(0x22);
  poll_t(0x3ff0);
  iVar1 = io_go();
  if (iVar1 == 0) {
    poll_t(0xf0);
    iVar1 = io_go();
    if (iVar1 != 0) {
      latch(0xf0);
      cell_pull_c8(0x301);
      return;
    }
  }
  row_page(0x22);
  cell_pull_c8(0x301);
  return;
}



