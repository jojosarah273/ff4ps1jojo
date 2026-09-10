/* FF4 source-port — interpreted module for func_8014071C.
 * Ground truth: src/func_8014071C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_80095A4C();




void func_8014071C(void)

{
  int iVar1;
  
  txt_set(0xf411);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    cell_dec_bank(0xf411);
    func_80095A4C();
    latch(0x31);
    battle_row_d568();
  }
  return;
}



