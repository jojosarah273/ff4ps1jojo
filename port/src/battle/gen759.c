/* FF4 source-port — interpreted module for func_8014A9B0.
 * Ground truth: src/func_8014A9B0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5958();
extern int func_800F6364();
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F8188();
extern int func_80148D58();
extern int func_80148E08();
extern int func_80148E80();
extern int func_8014C96C();

void func_8014A9B0(void)

{
  int iVar1;
  
  func_80148E08();
  latch(0x18);
  func_80148E80();
  wnd_open(4);
  do {
    latch(0x80);
    func_80148D58();
    cell_step();
    poll_t(8);
    iVar1 = io_just();
  } while (iVar1 == 0);
  func_8014C96C();
  latch(4);
  txt_draw(0xf2a0);
  return;
}



