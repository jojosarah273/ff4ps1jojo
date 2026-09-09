/* FF4 source-port — interpreted module for func_80175E08.
 * Ground truth: src/func_80175E08.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F53D4();
extern int func_800F5574();
extern int func_800F6240();
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6564();
extern int func_800F6B68();
extern int func_800F8188();
extern int func_800F824C();
extern int func_80175E88();

void func_80175E08(void)

{
  int iVar1;
  
  do {
    page_paint2(0x1703);
    txt_set(0x1703);
    io_poll(5);
    iVar1 = io_just();
    if (iVar1 != 0) {
      latch(0);
      txt_draw(0x1703);
    }
    func_80175E88();
    txt_cell(0x1000);
    iVar1 = gate(2);
  } while (iVar1 != 0);
  latch(1);
  cell_put(0xcc);
  return;
}



