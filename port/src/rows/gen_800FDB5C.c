/* FF4 source-port — interpreted module for cell_0xfdb5c.
 * Ground truth: src/cell_0xfdb5c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();


extern int func_800F6564();
extern int func_800FDBBC();
extern int func_800FDF34();

void cell_0xfdb5c(void)

{
  int iVar1;
  
  txt_set(0x1700);
  iVar1 = gate(0x202);
  if (iVar1 == 0) {
    func_800FDBBC();
  }
  else {
    io_poll(1);
    iVar1 = io_just();
    if (iVar1 != 0) {
      func_800FDF34();
    }
  }
  return;
}



