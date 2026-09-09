/* FF4 source-port — interpreted module for func_80114AF0.
 * Ground truth: src/func_80114AF0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"














extern int func_80114C98();

void func_80114AF0(void)

{
  int iVar1;
  
  wnd_open(0x70);
  tail(0x2c);
  wnd_open(0x78);
  tail(0x2e);
  do {
    wnd_fx_7d();
    row_page(0x2e);
    io_poll(0x10);
    iVar1 = io_go();
    if (iVar1 == 0) {
      txt_draw(0x2100);
    }
    func_80114C98();
    draw_pad(0x78);
    row_info(0xe);
    draw_pad(0x150);
    battle_item_rows();
    page(0x2e);
    cell_set50_from54();
    tail(0x2e);
    poll_t(0);
    iVar1 = io_just();
  } while (iVar1 == 0);
  open_row(0x80);
  battle_wndfx_run();
  return;
}



