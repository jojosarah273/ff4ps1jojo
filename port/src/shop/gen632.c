/* FF4 source-port — interpreted module for func_8016B470.
 * Ground truth: src/func_8016B470.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void func_8016B470(void)

{
  int iVar1;
  
  wnd_open(0);
  draw_pad(8);
  shop_gate_d348();
  wnd_open(2);
  draw_pad(0xc);
  shop_gate_d348();
  wnd_open(4);
  draw_pad(0x10);
  shop_gate_d348();
  wnd_open(6);
  draw_pad(0x14);
  shop_gate_d348();
  wnd_open(8);
  draw_pad(0x18);
  shop_gate_d348();
  txt_set(0x5b);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    wnd_open(10);
    draw_pad(0x1c);
    shop_gate_d348();
  }
  return;
}



