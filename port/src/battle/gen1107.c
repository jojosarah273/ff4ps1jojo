/* FF4 source-port — interpreted module for func_8014B1D0.
 * Ground truth: src/func_8014B1D0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_801425FC();
extern int func_8014AEC4();
extern int func_8014AF3C();

void func_8014B1D0(void)

{
  int iVar1;
  
  txt_set(0x34c5);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    func_801425FC();
  }
  else {
    txt_set(0x3522);
    iVar1 = gate(2);
    if (iVar1 == 0) {
      battle_row_34c4();
      func_8014AEC4();
      func_801425FC();
      func_8014AF3C();
    }
  }
  return;
}



