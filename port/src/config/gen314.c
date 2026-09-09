/* FF4 source-port — interpreted module for func_80128C4C.
 * Ground truth: src/func_80128C4C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F3D64();
extern int func_800F53D4();
extern int func_800F5958();
extern int func_800F61E8();
extern int func_800F6364();
extern int func_800F654C();
extern int func_800F6558();
extern int func_800F71DC();
extern int func_800F7500();
extern int func_800F8188();
extern int func_800F8768();
extern int func_800F8D00();
extern int func_800F9644();
extern int func_800F9660();
extern int func_8012214C();

void func_80128C4C(void)

{
  int iVar1;
  
  wnd_open(0x1040);
  do {
    latch(0);
    cell_draw(0);
    cell_step();
    poll_t(0x1800);
    iVar1 = io_just();
  } while (iVar1 == 0);
  wnd_open(0x3000);
  label(0x16aa);
  func_8012214C();
  row_prep(0x20);
  row_sync2(0x53);
  wnd_open(0xa710);
  draw_pad(0x1500);
  func_800F3D64(0xf7e);
  row_sync2(5);
  wnd_open(0x1500);
  draw_pad(0x1b0a);
  func_800F3D64(0x7e7e);
  row_prep_close();
  latch(0);
  txt_draw(0x16ae);
  func_800F61E8();
  txt_draw(0x16af);
  txt_draw(0x16b1);
  func_800F61E8();
  txt_draw(0x16ad);
  txt_draw(0x16ac);
  txt_draw(0x16b0);
  return;
}



