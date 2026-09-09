/* FF4 source-port — interpreted module for func_800FDA4C.
 * Ground truth: src/func_800FDA4C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F6434();
extern int func_800F6630();
extern int func_80177DAC();

void func_800FDA4C(void)

{
  int iVar1;
  
  do {
    func_80177DAC();
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



