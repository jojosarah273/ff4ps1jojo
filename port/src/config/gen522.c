/* FF4 source-port — interpreted module for func_8013D690.
 * Ground truth: src/func_8013D690.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5A90();
extern int func_800F5EA0();
extern int func_800F6DE8();
extern int func_800F7500();
extern int func_800F89D4();
extern int func_800F9644();
extern int func_800F9660();
extern int func_800F971C();

void func_8013D690(void)

{
  int iVar1;
  
  draw_pad(0x40);
  row_prep(0x20);
  do {
    func_800F6DE8(0x340);
    func_800F89D4(0x344);
    func_800F6DE8(0x342);
    func_800F89D4(0x346);
    poll_pair_cur();
    poll_pair_cur();
    poll_pair_cur();
    poll_pair_cur();
    poll_t(0xfffc);
    iVar1 = io_just();
  } while (iVar1 == 0);
  sep();
  row_prep_close();
  return;
}



