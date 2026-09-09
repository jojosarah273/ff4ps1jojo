/* FF4 source-port — interpreted module for func_8014B36C.
 * Ground truth: src/func_8014B36C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800953F4();
extern int func_800F654C();
extern int func_800F6564();
extern int func_800F8188();
extern int func_800F824C();
extern int func_800F8F74();
extern int func_800F8FB8();
extern int func_80141FC4();
extern int func_8014B98C();
extern int func_8014DA2C();

void func_8014B36C(void)

{
  func_80141FC4();
  func_800F8F74(0xf2a0);
  open_row(0);
  latch(6);
  txt_draw(0xf2d0);
  latch(0x80);
  cell_put(1);
  open_row(2);
  txt_set(0xf397);
  func_8014DA2C();
  latch(0xff);
  txt_draw(0xf320);
  func_800F8F74(0xf2d0);
  func_8014B98C();
  func_800953F4();
  return;
}



