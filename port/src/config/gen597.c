/* FF4 source-port — interpreted module for func_80120F1C.
 * Ground truth: src/func_80120F1C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F824C();
extern int func_800F8D6C();
extern int func_800F9200();
extern int func_800F9330();
extern int func_800F93DC();
extern int func_800F95A0();

void func_80120F1C(void)

{
  func_800F9200();
  row_open();
  wnd_open(0xc600);
  tail(0x29);
  wnd_open(0x7800);
  tail(0x35);
  latch(2);
  cell_put(0xc3);
  latch(0x20);
  cell_put(0x34);
  row_close();
  row_close2();
  return;
}



