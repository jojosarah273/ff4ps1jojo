/* FF4 source-port — interpreted module for func_8010F484.
 * Ground truth: src/func_8010F484.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5958();
extern int func_800F6364();
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F8768();

void func_8010F484(void)

{
  int iVar1;
  
  wnd_open(0);
  do {
    latch(0xff);
    cell_draw(0xe1b);
    cell_draw(0xe3b);
    cell_step();
    poll_t(0x10);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



