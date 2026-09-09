/* FF4 source-port — interpreted module for func_80120E2C.
 * Ground truth: src/func_80120E2C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F824C();
extern int func_800F8D6C();
extern int func_800F8FB8();
extern int func_800F9200();
extern int func_800F9330();
extern int func_800F93DC();
extern int func_800F95A0();

void func_80120E2C(void)

{
  func_800F9200();
  row_open();
  wnd_open(0xd600);
  tail(0x29);
  wnd_open(0x7000);
  tail(0x35);
  latch(3);
  cell_put(0xc3);
  open_row(0x34);
  row_close();
  row_close2();
  return;
}



