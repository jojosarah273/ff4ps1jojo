/* FF4 source-port — interpreted module for func_8014B8AC.
 * Ground truth: src/func_8014B8AC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void func_8014B8AC(void)

{
  int iVar1;
  
  txt_set(0x34c5);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    wnd_open(0x80b0);
    label(0xf289);
    latch(1);
    txt_draw(0xf2d0);
    battle_row_f2a0();
    wnd_open(0);
    label(0xf289);
  }
  return;
}



