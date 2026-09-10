/* FF4 source-port — interpreted module for fn_1x14bc0.
 * Ground truth: src/fn_1x14bc0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x14bc0(void)

{
  int iVar1;
  
  latch(0xf);
  cell_put(0x80);
  wnd_open(0x70);
  tail(0x2c);
  wnd_open(0);
  tail(0x2e);
  do {
    wnd_fx_7d();
    row_page(0x2e);
    io_poll(0x10);
    iVar1 = io_go();
    if (iVar1 == 0) {
      txt_draw(0x2100);
    }
    fn_1x14c98();
    draw_pad(0x78);
    row_info(0xe);
    draw_pad(0x150);
    battle_item_rows();
    page(0x2e);
    cell_step();
    tail(0x2e);
    poll_t(0x78);
    iVar1 = io_just();
  } while (iVar1 == 0);
  battle_wndfx_run();
  return;
}



