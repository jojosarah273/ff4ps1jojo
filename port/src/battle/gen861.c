/* FF4 source-port — interpreted module for func_80103F94.
 * Ground truth: src/func_80103F94.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5958();
extern int func_800F6364();
extern int func_800F6C68();
extern int func_800F71DC();
extern int func_800F8768();

void func_80103F94(void)

{
  int iVar1;
  
  wnd_open(0);
  do {
    func_800F6C68(0x14fad6);
    cell_draw(0x300);
    cell_step();
    poll_t(0x10);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



