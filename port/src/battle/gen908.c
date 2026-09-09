/* FF4 source-port — interpreted module for func_80118A40.
 * Ground truth: src/func_80118A40.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6630();
extern int func_800FD85C();
extern int func_800FD914();
extern int func_8011EA5C();

void func_80118A40(void)

{
  int iVar1;
  
  row_page(0x80);
  iVar1 = gate(0x202);
  if (iVar1 == 0) {
    latch(7);
    func_800FD85C();
    func_8011EA5C();
  }
  else {
    latch(7);
    func_800FD914();
    func_8011EA5C();
  }
  return;
}



