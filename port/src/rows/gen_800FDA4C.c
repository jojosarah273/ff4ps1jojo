/* FF4 source-port — interpreted module for cell_0xfda4c.
 * Ground truth: src/cell_0xfda4c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_800F6630();

void cell_0xfda4c(void)

{
  int iVar1;
  
  do {
    fn_1x77dac();
    row_page(2);
    iVar1 = gate(0x202);
    if (iVar1 != 0) {
      return;
    }
    row_page(3);
    iVar1 = gate(2);
  } while (iVar1 != 0);
  return;
}



