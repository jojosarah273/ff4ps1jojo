/* FF4 source-port — interpreted module for func_8015CEA0.
 * Ground truth: src/func_8015CEA0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5EA0();
extern int func_800F654C();
extern int func_800F6564();
extern int func_800F824C();
extern int func_800F82EC();
extern int func_800F971C();
extern int func_80150C38();

void func_8015CEA0(void)

{
  int iVar1;
  
  iVar1 = io_just();
  if (iVar1 != 0) {
    poll_pair_cur();
    sep();
    func_800F82EC(0x80);
    poll_pair_cur();
    latch(0x80);
    func_800F82EC(0x80);
  }
  txt_set(0x3939);
  cell_put(1);
  latch(6);
  func_80150C38();
  return;
}



