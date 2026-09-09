/* FF4 source-port — interpreted module for func_80139AFC.
 * Ground truth: src/func_80139AFC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F3D64();
extern int func_800F6558();
extern int func_800F71DC();
extern int func_800F7500();
extern int func_800F9644();
extern int func_800F9660();

void func_80139AFC(void)

{
  row_prep(0x20);
  row_sync2(0x3f);
  wnd_open(0xfc7d);
  draw_pad(0x480);
  func_800F3D64(0x1e7e);
  row_prep_close();
  return;
}



