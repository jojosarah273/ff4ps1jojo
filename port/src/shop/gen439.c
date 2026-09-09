/* FF4 source-port — interpreted module for func_8016BBCC.
 * Ground truth: src/func_8016BBCC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F7270();
extern int func_800F8188();
extern int func_800F8D00();
extern int func_800F8E50();
extern int func_800F9200();
extern int func_800F926C();
extern int func_800F93DC();
extern int func_800F9448();
extern int func_800F971C();
extern int func_800F9868();

void func_8016BBCC(void)

{
  row_open2();
  func_800F9200();
  sep();
  func_800F9200();
  row_pad();
  row_close2();
  func_800F8E50(0x2116);
  label(0x4342);
  txt_draw(0x4344);
  latch(1);
  txt_draw(0x4340);
  latch(0x18);
  txt_draw(0x4341);
  page(0x28);
  label(0x4345);
  func_800F9868(0x40);
  row_pad();
  return;
}



