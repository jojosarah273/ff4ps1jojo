/* FF4 source-port — interpreted module for func_8010A204.
 * Ground truth: src/func_8010A204.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F62BC();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800F71DC();
extern int func_800F8188();
extern int func_800F8D00();
extern int func_800F8FB8();
extern int func_800FCC84();
extern int func_800FCCBC();

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
    func_800FCC84();
    latch(9);
    txt_draw(0x4300);
    wnd_open(0x2840);
    label(0x2116);
    open_row(0x10);
    wnd_open(0x610);
    label(0x4302);
    wnd_open(0x100);
    label(0x4305);
    func_800FCCBC();
  }
  return;
}



