/* FF4 source-port — interpreted module for func_80129EF4.
 * Ground truth: src/func_80129EF4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5958();
extern int func_800F6364();
extern int func_800F654C();
extern int func_800F7270();
extern int func_800F8188();
extern int func_800F8768();

void func_80129EF4(void)

{
  int iVar1;
  
  latch(0xff);
  txt_draw(0x1b08);
  txt_draw(0x1bba);
  page(0x41);
  do {
    cell_draw(0x1b0a);
    cell_step();
    poll_t(6);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



