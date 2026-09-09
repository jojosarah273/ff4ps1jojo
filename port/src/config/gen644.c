/* FF4 source-port — interpreted module for func_8012C4F8.
 * Ground truth: src/func_8012C4F8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_800F6764();

extern int func_800F8378();


extern int func_8012C0A8();

void func_8012C4F8(void)

{
  int iVar1;
  
  iVar1 = func_8012C0A8();
  if (iVar1 != 2) {
    row_prep(0x20);
    draw_pad(9);
    func_800F6764(0x60);
    poll_pair_cur();
    poll_pair_cur();
    func_800F8378(0x60);
    draw_pad(0xd);
    func_800F6764(0x60);
    poll_pair_cur();
    poll_pair_cur();
    func_800F8378(0x60);
    row_prep_close();
  }
  return;
}



