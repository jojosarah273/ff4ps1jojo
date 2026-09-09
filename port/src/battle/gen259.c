/* FF4 source-port — interpreted module for func_801098C8.
 * Ground truth: src/func_801098C8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"












extern int func_800FCCBC();

void func_801098C8(void)

{
  int iVar1;
  
  row_page(0xcb);
  iVar1 = gate(2);
  if (iVar1 != 0) {
    row_page(0xeb);
    iVar1 = gate(0x202);
    if (iVar1 != 0) {
      open_row(0xeb);
      latch(0x80);
      txt_draw(0x2115);
      wnd_fx_tags();
      latch(1);
      txt_draw(0x4300);
      wnd_open(0x2840);
      label(0x2116);
      wnd_open(0xf6d6);
      label(0x4302);
      latch(0x14);
      txt_draw(0x4304);
      wnd_open(0x40);
      label(0x4305);
      func_800FCCBC();
      wnd_open(0x2860);
      label(0x2116);
      cell_clear_bank(0x420b);
      wnd_open(0xf716);
      label(0x4302);
      wnd_open(0x40);
      label(0x4305);
      func_800FCCBC();
      draw_pad(0x20);
      wnd_open(0x2c00);
      label(0x2116);
      do {
        cell_clear_bank(0x420b);
        wnd_open(0xf756);
        label(0x4302);
        wnd_open(0x40);
        label(0x4305);
        func_800FCCBC();
        poll_pair_cur();
        iVar1 = poll_go(0x202);
      } while (iVar1 != 0);
    }
  }
  return;
}



