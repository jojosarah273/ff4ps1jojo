/* FF4 source-port — interpreted module for func_8012C82C.
 * Ground truth: src/func_8012C82C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_801221EC();

void func_8012C82C(void)

{
  int iVar1;
  
  row_prep(0x20);
  draw_pad(0xd);
  cell_push89_sel(0x60);
  sep_a();
  cell_pos_fwd(10);
  cell_flags_cmp3(999);
  iVar1 = io_go();
  if (iVar1 != 0) {
    row_sync2(999);
  }
  cell_pull89_bank(0x60);
  row_prep_close();
  func_801221EC();
  return;
}



