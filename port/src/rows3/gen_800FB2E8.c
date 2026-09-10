/* FF4 source-port — interpreted module for func_800FB2E8.
 * Ground truth: src/func_800FB2E8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_800F654C();
extern int func_800F6630();

extern int func_800F8F74();
extern int func_800F8FB8();
extern int func_800FB3A0();
extern int func_800FD718();


uint32_t shop_pass_b2e8(void)

{
  int iVar1;
  
  func_800FB3A0();
  func_800F8FB8(0xd1);
  func_800F6630(0x85);
  iVar1 = gate(0x202);
  if (iVar1 == 0) {
    func_800F654C(2);
    txt_draw(0x1705);
  }
  func_800F8FB8(0x85);
  func_800F654C(7);
  txt_draw(0x2105);
  func_800F654C(0x11);
  txt_draw(0x212c);
  func_800F8F74(0x2130);
  func_800F8F74(0x2131);
  func_800F6630(0xb1);
  iVar1 = gate(0x202);
  if (iVar1 == 0) {
    func_800FD718();
  }
  shop_confirm_rows_x3e_x3d_windows();
  shop_rows_xcdb_xbd5_cells_values_l();
  return;
    return 0;
}
