/* FF4 source-port — interpreted module for func_800FB224.
 * Ground truth: src/func_800FB224.c (byte-verified).
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
extern int func_800F8188();
extern int func_800F8768();
extern int func_800FA460();
extern int func_800FB2E8();
extern int func_800FE978();
extern int func_800FFADC();
extern int func_8011C1F8();
extern int func_8011D218();

void func_800FB224(void)

{
  int iVar1;
  
  func_800FA460();
  func_800FB2E8();
  latch(2);
  txt_draw(0x1701);
  latch(2);
  txt_draw(0x6fa);
  latch(0x14);
  wnd_open(0x8a00);
  func_800FE978();
  latch(0x14);
  draw_pad(0x8400);
  func_8011C1F8();
  wnd_open(0);
  do {
    func_800F6C68(0x148c80);
    cell_draw(0xedb);
    cell_step();
    poll_t(0x100);
    iVar1 = io_just();
  } while (iVar1 == 0);
  func_800FFADC();
  func_8011D218();
  return;
}



