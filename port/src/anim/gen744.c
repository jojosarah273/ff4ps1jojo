/* FF4 source-port — interpreted module for func_80175D90.
 * Ground truth: src/func_80175D90.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F4120();
extern int func_800F4248();
extern int func_800F62BC();
extern int func_800F6434();
extern int func_800F6564();
extern int func_800F6630();
extern int func_80175E08();

void func_80175D90(void)

{
  int iVar1;
  
  txt_set(0x1704);
  iVar1 = gate(0x202);
  if (iVar1 == 0) {
    row_page(2);
    row_read(0x10);
    iVar1 = sel(2);
    if (iVar1 == 0) {
      row_page(0x53);
      iVar1 = gate(2);
      if (iVar1 != 0) {
        key_page(0x53);
        func_80175E08();
      }
    }
  }
  return;
}



