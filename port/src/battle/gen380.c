/* FF4 source-port — interpreted module for fn_1x09a28.
 * Ground truth: src/fn_1x09a28.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x09a28(void)

{
  int iVar1;
  
  row_page(0xec);
  iVar1 = gate(0x202);
  if (iVar1 != 0) {
    open_row(0xec);
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
    wnd_open(0x40);
    label(0x4305);
    catalog_dispatch_0();
    wnd_open(0x2860);
    label(0x2116);
    cell_clear_bank(0x420b);
    wnd_open(0x610);
    label(0x4302);
    wnd_open(0x40);
    label(0x4305);
    catalog_dispatch_0();
  }
  return;
}



