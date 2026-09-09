/* FF4 source-port — interpreted module for func_800FB3A0.
 * Ground truth: src/func_800FB3A0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F4248();
extern int func_800F53D4();
extern int func_800F5958();
extern int func_800F6B68();
extern int func_800F71DC();
extern int func_800F8768();
extern int func_80117DF8();

void func_800FB3A0(void)

{
  int iVar1;
  
  wnd_open(0);
  do {
    txt_cell(0x1004);
    row_read(0xbf);
    cell_draw(0x1004);
    func_80117DF8();
    poll_t(0x140);
    iVar1 = io_just();
  } while (iVar1 == 0);
  return;
}



