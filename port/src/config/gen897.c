/* FF4 source-port — interpreted module for func_80130A24.
 * Ground truth: src/func_80130A24.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F5C64();
extern int func_800F5EA0();
extern int func_800F6364();
extern int func_800F8768();
extern int func_800F93DC();

void func_80130A24(void)

{
  int iVar1;
  
  do {
    cell_draw(0xc601);
    cell_step();
    cell_step();
    poll_pair_cur();
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  row_close2();
  return;
}



