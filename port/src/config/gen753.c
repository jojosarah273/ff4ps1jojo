/* FF4 source-port — interpreted module for func_80152EAC.
 * Ground truth: src/func_80152EAC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F4FAC();
extern int func_800F5140();
extern int func_800F5C64();
extern int func_800F5EA0();
extern int func_800F6364();
extern int func_800F71DC();
extern int func_800F7500();

void func_80152EAC(void)

{
  int iVar1;
  
  wnd_open(0);
  draw_pad(8);
  do {
    row_sel_cell_cur();
    iVar1 = func_800F4FAC(0x101);
    if (iVar1 == 0) {
      cell_step();
    }
    poll_pair_cur();
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  return;
}



