/* FF4 source-port — interpreted module for func_8010A204.
 * Ground truth: src/func_8010A204.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void func_8010A204(void)

{
  int iVar1;
  
  row_page(0xea);
  io_poll(1);
  iVar1 = io_just();
  if (iVar1 != 0) {
    key_page(0xea);
    latch(0x80);
    txt_draw(0x2115);
    wnd_fx_tags();
    latch(9);
    txt_draw(0x4300);
    wnd_open(0x2840);
    label(0x2116);
    open_row(0x10);
    wnd_open(0x610);
    label(0x4302);
    wnd_open(0x100);
    label(0x4305);
    catalog_dispatch_0();
  }
  return;
}



