/* FF4 source-port — interpreted module for func_8014AE1C.
 * Ground truth: src/func_8014AE1C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"




extern int func_8014ADD4();
extern int func_8014AEC4();
extern int func_8014AF3C();
extern int func_8014B9B4();
extern int func_8014BA34();
extern int func_8014C96C();
extern int func_8014C994();

void func_8014AE1C(void)

{
  int iVar1;
  
  txt_set(0x34c5);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    func_8014ADD4();
    func_8014C994();
    cell_clear_bank(0xf42e);
  }
  else {
    txt_set(0x3522);
    iVar1 = gate(2);
    if (iVar1 == 0) {
      func_8014B9B4();
      func_8014AEC4();
      func_8014ADD4();
      func_8014C96C();
      page_paint2(0xf2a0);
      func_8014AF3C();
      func_8014BA34();
      cell_clear_bank(0xf42e);
    }
  }
  return;
}



