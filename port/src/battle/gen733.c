/* FF4 source-port — interpreted module for func_8011F7D4.
 * Ground truth: src/func_8011F7D4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F4120();
extern int func_800F4248();
extern int func_800F5410();
extern int func_800F5480();
extern int func_800F63F8();
extern int func_800F6630();
extern int func_800F824C();
extern int func_8011F884();

void func_8011F7D4(void)

{
  int iVar1;
  
  row_page(1);
  row_read(3);
  iVar1 = sel(0x202);
  if (iVar1 == 0) {
    func_8011F884();
    row_page(3);
    func_800F63F8();
    cell_put(1);
    sep_a();
  }
  else {
    sep_b();
  }
  return;
}



