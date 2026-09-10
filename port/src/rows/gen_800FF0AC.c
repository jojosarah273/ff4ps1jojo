/* FF4 source-port — interpreted module for cell_0xff0ac.
 * Ground truth: src/cell_0xff0ac.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5A90();

extern int func_800F63BC();
extern int func_800F654C();




extern int func_800F8EBC();


void cell_0xff0ac(void)

{
  int iVar1;
  
  wnd_open(0);
  draw_pad(0);
  do {
    cell_push_c8(0xfa900);
    cell_pull_c8(0x1000);
    cell_step();
    step2();
    poll_t(0x14);
    iVar1 = io_just();
  } while (iVar1 == 0);
  draw_pad(0);
  do {
    cell_push_c8(0xfa900);
    cell_pull_c8(0x102d);
    cell_step();
    step2();
    poll_t(3);
    iVar1 = io_just();
  } while (iVar1 == 0);
  draw_pad(0);
  do {
    cell_push_c8(0xfa900);
    cell_pull_c8(0x1037);
    cell_step();
    step2();
    poll_t(9);
    iVar1 = io_just();
  } while (iVar1 == 0);
  draw_pad(0);
  row_info(0x3d);
  fn_1x183b0();
  latch(0);
  battle_splash_x30_window_x7e_windo();
  return;
}



