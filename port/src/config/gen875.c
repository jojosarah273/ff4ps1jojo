/* FF4 source-port — interpreted module for func_8015AA6C.
 * Ground truth: src/func_8015AA6C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"





extern int func_8015240C();
extern int func_8015A56C();
extern int func_8015ABEC();

void func_8015AA6C(void)

{
  txt_set(0x397b);
  cell_put(0xdf);
  latch(3);
  cell_put(0xe1);
  func_8015240C();
  page(0xe3);
  tail(0xa9);
  func_8015ABEC();
  func_8015A56C();
  return;
}



