/* FF4 source-port — interpreted module for fn_1x4ae1c.
 * Ground truth: src/fn_1x4ae1c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"





void fn_1x4ae1c(void)

{
  int iVar1;
  
  txt_set(0x34c5);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    fn_1x4add4();
    fn_1x4c994();
    cell_clear_bank(0xf42e);
  }
  else {
    txt_set(0x3522);
    iVar1 = gate(2);
    if (iVar1 == 0) {
      battle_row_34c4();
      fn_1x4aec4();
      fn_1x4add4();
      fn_1x4c96c();
      page_paint2(0xf2a0);
      fn_1x4af3c();
      fn_1x4ba34();
      cell_clear_bank(0xf42e);
    }
  }
  return;
}



