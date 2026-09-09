/* FF4 source-port — interpreted module for func_80128C4C.
 * Ground truth: src/func_80128C4C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_8012214C();

void func_80128C4C(void)

{
  int iVar1;
  
  wnd_open(0x1040);
  do {
    latch(0);
    cell_draw(0);
    cell_step();
    poll_t(0x1800);
    iVar1 = io_just();
  } while (iVar1 == 0);
  wnd_open(0x3000);
  label(0x16aa);
  func_8012214C();
  row_prep(0x20);
  row_sync2(0x53);
  wnd_open(0xa710);
  draw_pad(0x1500);
  battle_wait_just(0xf7e);
  row_sync2(5);
  wnd_open(0x1500);
  draw_pad(0x1b0a);
  battle_wait_just(0x7e7e);
  row_prep_close();
  latch(0);
  txt_draw(0x16ae);
  cell_set50_from40();
  txt_draw(0x16af);
  txt_draw(0x16b1);
  cell_set50_from40();
  txt_draw(0x16ad);
  txt_draw(0x16ac);
  txt_draw(0x16b0);
  return;
}



