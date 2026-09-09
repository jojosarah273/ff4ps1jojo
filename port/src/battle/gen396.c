/* FF4 source-port — interpreted module for func_80114AF0.
 * Ground truth: src/func_80114AF0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53C0();
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F5958();
extern int func_800F5E48();
extern int func_800F6630();
extern int func_800F71DC();
extern int func_800F7270();
extern int func_800F7500();
extern int func_800F8188();
extern int func_800F8D6C();
extern int func_800F8EBC();
extern int func_800F8FB8();
extern int func_800FE778();
extern int func_80114C98();
extern int func_80115A34();
extern int func_8011EA5C();

void func_80114AF0(void)

{
  int iVar1;
  
  wnd_open(0x70);
  tail(0x2c);
  wnd_open(0x78);
  tail(0x2e);
  do {
    func_800FE778();
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
    func_80115A34();
    page(0x2e);
    func_800F5E48();
    tail(0x2e);
    poll_t(0);
    iVar1 = io_just();
  } while (iVar1 == 0);
  open_row(0x80);
  func_8011EA5C();
  return;
}



