/* FF4 source-port — interpreted module for func_800FF0AC.
 * Ground truth: src/func_800FF0AC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5A90();
extern int func_800F6364();
extern int func_800F63BC();
extern int func_800F654C();
extern int func_800F6C68();
extern int func_800F71DC();
extern int func_800F7500();
extern int func_800F8960();
extern int func_800F8EBC();
extern int func_801183B0();
extern int func_80150A30();

void func_800FF0AC(void)

{
  int iVar1;
  
  wnd_open(0);
  draw_pad(0);
  do {
    func_800F6C68(0xfa900);
    func_800F8960(0x1000);
    cell_step();
    step2();
    poll_t(0x14);
    iVar1 = io_just();
  } while (iVar1 == 0);
  draw_pad(0);
  do {
    func_800F6C68(0xfa900);
    func_800F8960(0x102d);
    cell_step();
    step2();
    poll_t(3);
    iVar1 = io_just();
  } while (iVar1 == 0);
  draw_pad(0);
  do {
    func_800F6C68(0xfa900);
    func_800F8960(0x1037);
    cell_step();
    step2();
    poll_t(9);
    iVar1 = io_just();
  } while (iVar1 == 0);
  draw_pad(0);
  row_info(0x3d);
  func_801183B0();
  latch(0);
  func_80150A30();
  return;
}



