/* FF4 source-port — interpreted module for func_801220A4.
 * Ground truth: src/func_801220A4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F5B8C();
extern int func_800F5DA0();
extern int func_800F654C();
extern int func_800F8768();
extern int func_801222C4();

void func_801220A4(void)

{
  int iVar1;
  
  do {
    latch(0);
    cell_draw(0);
    func_801222C4();
    poll_pair(0x1d);
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  return;
}



