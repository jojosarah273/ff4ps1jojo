/* FF4 source-port — interpreted module for func_80102ED8.
 * Ground truth: src/func_80102ED8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"





extern int func_800FE7D8();

extern int func_800FF024();

void func_80102ED8(void)

{
  int iVar1;
  
  latch(3);
  txt_draw(0x1705);
  do {
    cell_clear_pad();
    func_800FF024();
    func_800FE7D8();
    row_page(0x7a);
    row_read(7);
    iVar1 = sel(0x202);
  } while (iVar1 != 0);
  return;
}



