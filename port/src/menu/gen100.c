/* FF4 source-port — interpreted module for func_800FA834.
 * Ground truth: src/func_800FA834.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5958();
extern int func_800F6364();
extern int func_800F654C();
extern int func_800F6C68();
extern int func_800F71DC();
extern int func_800F8188();
extern int func_800F8768();
extern int func_800F8D00();
extern int func_800F8F74();
extern int func_800F90EC();

void func_800FA834(void)

{
  int iVar1;
  
  func_800F8F74(0x1700);
  func_800F8F74(0x1701);
  func_800F8F74(0x1703);
  func_800F8F74(0x170f);
  func_800F8F74(0x1712);
  func_800F8F74(0x1718);
  func_800F8F74(0x171c);
  func_800F8F74(0x1720);
  func_800F8F74(0x1724);
  func_800F8F74(0x1728);
  func_800F8F74(0x172b);
  func_800F8F74(0x171b);
  func_800F8F74(0x171f);
  func_800F8F74(0x1723);
  func_800F8F74(0x1727);
  wnd_open(0);
  label(0x172c);
  wnd_open(0);
  do {
    func_800F6C68(0x12f200);
    cell_draw(0x12e0);
    cell_step();
    poll_t(0x40);
    iVar1 = io_just();
  } while (iVar1 == 0);
  wnd_open(0);
  do {
    func_800F6C68(0x12f240);
    cell_draw(0x1280);
    cell_step();
    poll_t(0x20);
    iVar1 = io_just();
  } while (iVar1 == 0);
  wnd_open(0);
  do {
    page_paint(0x12a0);
    cell_step();
    poll_t(0x20);
    iVar1 = io_just();
  } while (iVar1 == 0);
  latch(0xfe);
  txt_draw(0x149c);
  latch(0xff);
  txt_draw(0x149e);
  latch(1);
  txt_draw(0x149d);
  txt_draw(0x149f);
  return;
}



