/* FF4 source-port — interpreted module for func_800FB09C.
 * Ground truth: src/func_800FB09C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5958();
extern int func_800F6364();
extern int func_800F654C();
extern int func_800F6C68();
extern int func_800F71DC();
extern int func_800F7500();
extern int func_800F8768();
extern int func_800F8F74();
extern int func_800FA460();
extern int func_800FB2E8();
extern int func_800FE028();
extern int func_800FE978();
extern int func_800FFADC();
extern int func_8011C1F8();
extern int func_8011D218();
extern int func_801743E0();

void func_800FB09C(void)

{
  int iVar1;
  
  func_800FA460();
  func_800FB2E8();
  func_800F8F74(0x1701);
  func_800F8F74(0x6fa);
  func_800FE028();
  latch(0x14);
  wnd_open(0x8900);
  func_800FE978();
  latch(0x14);
  draw_pad(0x8000);
  func_8011C1F8();
  wnd_open(0);
  do {
    func_800F6C68(0x148a80);
    cell_draw(0xedb);
    cell_step();
    poll_t(0x100);
    iVar1 = io_just();
  } while (iVar1 == 0);
  func_800FFADC();
  func_8011D218();
  func_801743E0();
  return;
}



