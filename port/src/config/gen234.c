/* FF4 source-port — interpreted module for func_80151CD8.
 * Ground truth: src/func_80151CD8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"









extern int func_800F902C();

void func_80151CD8(void)

{
  int iVar1;
  
  wnd_open(0x7f);
  do {
    func_800F902C(0x80);
    cell_set50_from54();
    iVar1 = poll_go(0x8080);
  } while (iVar1 != 0);
  wnd_open(0x197d);
  do {
    page_paint(0x2000);
    cell_set50_from54();
    iVar1 = poll_go(0x8080);
  } while (iVar1 != 0);
  wnd_open(7);
  do {
    page_paint(0x1804);
    cell_set50_from54();
    iVar1 = poll_go(0x8080);
  } while (iVar1 != 0);
  wnd_open(0x710);
  latch(0x80);
  do {
    cell_draw(0x2c7a);
    cell_set50_from54();
    cell_set50_from54();
    cell_set50_from54();
    cell_set50_from54();
    iVar1 = poll_go(0x8080);
  } while (iVar1 != 0);
  wnd_open(0x333f);
  latch(0xff);
  do {
    cell_draw(0x397f);
    cell_set50_from54();
    iVar1 = poll_go(0x8080);
  } while (iVar1 != 0);
  wnd_open(5);
  do {
    cell_draw(0x3929);
    cell_set50_from54();
    iVar1 = poll_go(0x8080);
  } while (iVar1 != 0);
  wnd_open(7);
  do {
    cell_draw(0x35f7);
    cell_set50_from54();
    iVar1 = poll_go(0x8080);
  } while (iVar1 != 0);
  cell_put(0xd0);
  txt_draw(0x357b);
  txt_draw(0x357c);
  txt_draw(0x3583);
  txt_draw(0x355e);
  txt_draw(0x3601);
  txt_draw(0x3602);
  txt_draw(0x38d6);
  latch(0x1a);
  txt_draw(0x3317);
  txt_draw(0x3333);
  txt_draw(0x334f);
  txt_draw(0x336b);
  txt_draw(0x3387);
  cell_set50_from40();
  txt_draw(0x331b);
  txt_draw(0x3337);
  txt_draw(0x3353);
  txt_draw(0x336f);
  txt_draw(0x338b);
  txt_set(0x16ac);
  txt_draw(0x3538);
  txt_draw(0x38ee);
  wnd_open(0x18);
  latch(2);
  do {
    cell_draw(0x35a4);
    page_paint(0x35a5);
    cell_set50_from54();
    cell_set50_from54();
    iVar1 = poll_go(0x8080);
  } while (iVar1 != 0);
  return;
}



