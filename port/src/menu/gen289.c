/* FF4 source-port — interpreted module for func_800FCAB8.
 * Ground truth: src/func_800FCAB8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F4120();
extern int func_800F4248();
extern int func_800F4F4C();
extern int func_800F5140();
extern int func_800F6630();
extern int func_800F6C68();
extern int func_800F7864();
extern int func_800F824C();
extern int func_800F885C();
extern int func_800F9690();
extern int func_800FCC0C();

void func_800FCAB8(void)

{
  int iVar1;
  
  row_page(0x7a);
  row_read(1);
  iVar1 = sel(2);
  if (iVar1 != 0) {
    row_page(0x7a);
    row_read(0x1e);
    func_800F7864();
    func_800F9690();
    func_800F6C68(0x14fc66);
    row_sel_cell_cur();
    row_sel_cell2_cur();
    func_800F9690();
    func_800F6C68(0x7f5800);
    cell_put(8);
    func_800F6C68(0x7f5820);
    func_800FCC0C();
    func_800F885C(0x7f5800);
    row_page(7);
    func_800F885C(0x7f5820);
    func_800F6C68(0x7f5801);
    cell_put(8);
    func_800F6C68(0x7f5821);
    func_800FCC0C();
    func_800F885C(0x7f5801);
    row_page(7);
    func_800F885C(0x7f5821);
    func_800F6C68(0x7f5810);
    cell_put(8);
    func_800F6C68(0x7f5830);
    func_800FCC0C();
    func_800F885C(0x7f5810);
    row_page(7);
    func_800F885C(0x7f5830);
  }
  return;
}



