/* FF4 source-port — interpreted module for func_80103FE8.
 * Ground truth: src/func_80103FE8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"









extern int func_801766B0();

void func_80103FE8(void)

{
  int iVar1;
  
  wnd_open(0x4000);
  tail(0x47);
  wnd_open(0x100);
  tail(0x45);
  latch(0x1e);
  cell_put(0x3c);
  wnd_open(0xfee0);
  tail(0x3d);
  func_801766B0();
  wnd_open(0);
  do {
    cell_push_c8(0x1effe0);
    cell_draw(0xcdb);
    cell_draw(0xddb);
    cell_step();
    poll_t(0x20);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



