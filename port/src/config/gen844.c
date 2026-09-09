/* FF4 source-port — interpreted module for func_801267E8.
 * Ground truth: src/func_801267E8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F3D64();
extern int func_800F6558();
extern int func_800F71DC();
extern int func_800F7500();
extern int func_800F9644();
extern int func_800F9660();

void func_801267E8(void)

{
  row_prep(0x20);
  row_sync2(0xff);
  wnd_open(0xa000);
  draw_pad(0xa400);
  func_800F3D64(0x7e7e);
  row_prep_close();
  return;
}



