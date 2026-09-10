/* FF4 source-port — interpreted module for fn_1x4b1d0.
 * Ground truth: src/fn_1x4b1d0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"



void fn_1x4b1d0(void)

{
  int iVar1;
  
  txt_set(0x34c5);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    fn_1x425fc();
  }
  else {
    txt_set(0x3522);
    iVar1 = gate(2);
    if (iVar1 == 0) {
      battle_row_34c4();
      fn_1x4aec4();
      fn_1x425fc();
      fn_1x4af3c();
    }
  }
  return;
}



