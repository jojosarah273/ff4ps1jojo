/* FF4 source-port — interpreted module for func_8015A614.
 * Ground truth: src/func_8015A614.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"





extern int func_8015240C();
extern int func_8015A6CC();

void func_8015A614(void)

{
  txt_set(0x397b);
  cell_put(0xdf);
  latch(6);
  cell_put(0xe1);
  func_8015240C();
  page(0xe3);
  cell_push_c8(0xf9680);
  func_8015A6CC();
  return;
}



