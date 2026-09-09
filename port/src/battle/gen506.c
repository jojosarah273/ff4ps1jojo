/* FF4 source-port — interpreted module for func_80114D18.
 * Ground truth: src/func_80114D18.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_80172BA8();

void func_80114D18(void)

{
  wnd_fx_7d();
  cell_clear_pad();
  func_80172BA8();
  page(0x2c);
  tail(0xc);
  page(0x2e);
  tail(0xe);
  latch(0x1c);
  cell_put(0x91);
  latch(0x78);
  cell_put(0x8f);
  draw_pad(0x180);
  latch(0x60);
  cell_put(0x92);
  battle_rows_300();
  draw_pad(0x70);
  row_info(0xe);
  draw_pad(0x140);
  battle_item_rows();
  return;
}



