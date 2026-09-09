/* FF4 source-port — interpreted module for func_80111BBC.
 * Ground truth: src/func_80111BBC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5958();
extern int func_800F6364();
extern int func_800F6C68();
extern int func_800F71DC();
extern int func_800F8768();

void func_80111BBC(void)

{
  int iVar1;
  
  wnd_open(0);
  do {
    func_800F6C68(0xd8210);
    cell_draw(0xe1b);
    cell_draw(0xaad);
    func_800F6C68(0xd8220);
    cell_draw(0xe3b);
    cell_step();
    poll_t(0x10);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



