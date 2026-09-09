/* FF4 source-port — interpreted module for func_800FB160.
 * Ground truth: src/func_800FB160.c (byte-verified).
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
extern int func_800F8F74();
extern int func_800FA460();
extern int func_800FB2E8();
extern int func_800FDD28();
extern int func_800FE978();
extern int func_800FFADC();
extern int func_8011C1F8();
extern int func_8011D218();

void func_800FB160(void)

{
  int iVar1;
  
  func_800FA460();
  func_800FB2E8();
  latch(1);
  txt_draw(0x1701);
  func_800F8F74(0x6fa);
  func_800FDD28();
  latch(0x14);
  wnd_open(0x8980);
  func_800FE978();
  latch(0x14);
  draw_pad(0x8200);
  func_8011C1F8();
  wnd_open(0);
  do {
    func_800F6C68(0x148b80);
    cell_draw(0xedb);
    cell_step();
    poll_t(0x100);
    iVar1 = io_just();
  } while (iVar1 == 0);
  func_800FFADC();
  func_8011D218();
  return;
}



