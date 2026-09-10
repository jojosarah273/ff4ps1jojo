/* FF4 source-port — interpreted module for cell_0xfb224.
 * Ground truth: src/cell_0xfb224.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5958();

extern int func_800F654C();




extern int func_800F8768();
extern int func_800FA460();
extern int func_800FB2E8();
extern int func_800FE978();
extern int func_800FFADC();


void cell_0xfb224(void)

{
  int iVar1;
  
  func_800FA460();
  func_800FB2E8();
  latch(2);
  txt_draw(0x1701);
  latch(2);
  txt_draw(0x6fa);
  latch(0x14);
  wnd_open(0x8a00);
  func_800FE978();
  latch(0x14);
  draw_pad(0x8400);
  fn_1x1c1f8();
  wnd_open(0);
  do {
    cell_push_c8(0x148c80);
    cell_draw(0xedb);
    cell_step();
    poll_t(0x100);
    iVar1 = io_just();
  } while (iVar1 == 0);
  func_800FFADC();
  fn_1x1d218();
  return;
}



