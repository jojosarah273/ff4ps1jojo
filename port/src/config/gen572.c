/* FF4 source-port — interpreted module for func_801210AC.
 * Ground truth: src/func_801210AC.c (byte-verified).
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
extern int func_800F971C();

void func_801210AC(void)

{
  func_800F9200();
  row_open();
  wnd_open(0xa600);
  tail(0x29);
  wnd_open(0x6800);
  tail(0x35);
  sep();
  cell_put(0xc3);
  latch(0x20);
  cell_put(0x34);
  row_close();
  row_close2();
  return;
}



