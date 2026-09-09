/* FF4 source-port — interpreted module for func_800FD9FC.
 * Ground truth: src/func_800FD9FC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F6434();
extern int func_800F6630();
extern int func_80177DAC();

void func_800FD9FC(void)

{
  int iVar1;
  
  do {
    do {
      func_80177DAC();
      row_page(2);
      iVar1 = gate(0x202);
    } while (iVar1 != 0);
    row_page(3);
    iVar1 = gate(0x202);
  } while (iVar1 != 0);
  return;
}



