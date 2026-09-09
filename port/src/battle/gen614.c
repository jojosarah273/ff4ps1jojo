/* FF4 source-port — interpreted module for func_8014AD44.
 * Ground truth: src/func_8014AD44.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F4248();
extern int func_800F6240();
extern int func_800F654C();
extern int func_800F6564();
extern int func_800F8188();
extern int func_800F9200();
extern int func_800F93DC();
extern int func_8014D080();
extern int func_8014D14C();
extern int func_8014D394();

void func_8014AD44(void)

{
  func_800F9200();
  txt_set(0x34c4);
  row_read(0x80);
  txt_draw(0xf279);
  txt_set(0x34c5);
  txt_draw(0xf27a);
  txt_draw(0xf281);
  txt_draw(0xf284);
  func_8014D080();
  func_8014D394();
  latch(3);
  txt_draw(0xf281);
  row_close2();
  func_8014D14C();
  page_paint2(0xf42e);
  return;
}



