/* FF4 source-port — interpreted module for func_801098C8.
 * Ground truth: src/func_801098C8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F5C64();
extern int func_800F5EA0();
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F71DC();
extern int func_800F7500();
extern int func_800F8188();
extern int func_800F8D00();
extern int func_800F8F74();
extern int func_800F8FB8();
extern int func_800FCC84();
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
      func_800FCC84();
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
      func_800F8F74(0x420b);
      wnd_open(0xf716);
      label(0x4302);
      wnd_open(0x40);
      label(0x4305);
      func_800FCCBC();
      draw_pad(0x20);
      wnd_open(0x2c00);
      label(0x2116);
      do {
        func_800F8F74(0x420b);
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



