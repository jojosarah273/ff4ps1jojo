/* FF4 source-port — interpreted module for func_80103B38.
 * Ground truth: src/func_80103B38.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F5B8C();
extern int func_800F5DA0();
extern int func_800F654C();
extern int func_800F824C();
extern int func_800FE7B0();
extern int func_800FF024();
extern int func_80103EAC();
extern int func_80103F00();

void func_80103B38(void)

{
  int iVar1;
  
  latch(0x28);
  cell_put(0x79);
  do {
    func_80103EAC();
    func_800FF024();
    func_800FE7B0();
    func_80103F00();
    poll_pair(0x79);
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  return;
}



