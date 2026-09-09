/* FF4 source-port — interpreted module for func_801051A8.
 * Ground truth: src/func_801051A8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_8010D2A0();

void func_801051A8(void)

{
  int iVar1;
  
  row_page(0xa1);
  row_read(4);
  iVar1 = sel(2);
  if (iVar1 == 0) {
    row_page(0xa1);
    row_read(3);
    cell_tick_and(0xd2);
    iVar1 = sel(2);
    if (iVar1 != 0) {
      return;
    }
  }
  txt_set(0x1706);
  cell_put(0xc);
  txt_set(0x1707);
  cell_put(0xe);
  func_8010D2A0();
  return;
}



