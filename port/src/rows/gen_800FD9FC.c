/* FF4 source-port — interpreted module for cell_0xfd9fc.
 * Ground truth: src/cell_0xfd9fc.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void cell_0xfd9fc(void)

{
  int iVar1;
  
  do {
    do {
      fn_1x77dac();
      row_page(2);
      iVar1 = gate(0x202);
    } while (iVar1 != 0);
    row_page(3);
    iVar1 = gate(0x202);
  } while (iVar1 != 0);
  return;
}



