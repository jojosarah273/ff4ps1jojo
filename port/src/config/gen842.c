/* FF4 source-port — interpreted module for func_8012807C.
 * Ground truth: src/func_8012807C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F3D64();





extern int func_8011EF0C();
extern int func_8011F320();

void func_8012807C(void)

{
  row_prep(0x20);
  wnd_open(0xfe28);
  draw_pad(0xa160);
  row_sync2(0x9f);
  func_800F3D64(0x7e7e);
  row_prep_close();
  func_8011F320();
  func_8011EF0C();
  return;
}



