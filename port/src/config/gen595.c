/* FF4 source-port — interpreted module for func_8012371C.
 * Ground truth: src/func_8012371C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F3D48();
extern int func_800F5B8C();
extern int func_800F5DA0();
extern int func_800F6364();
extern int func_800F63BC();
extern int func_800F6630();
extern int func_800F6C68();
extern int func_800F8960();
extern int func_801245B4();

void func_8012371C(void)

{
  int iVar1;
  
  do {
    func_800F6C68(0xfa764);
    func_801245B4();
    func_800F8960(0);
    stat_sync();
    func_800F8960(0x40);
    step2();
    row_page(0x34);
    func_800F8960(0);
    func_800F8960(0x40);
    step2();
    cell_step();
    poll_pair(0x45);
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  return;
}



