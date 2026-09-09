/* FF4 source-port — interpreted module for func_8016C0A8.
 * Ground truth: src/func_8016C0A8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"







extern int func_80176F60();

void func_8016C0A8(void)

{
  int iVar1;
  
  row_page(0x4a);
  row_read(7);
  iVar1 = sel(2);
  if (iVar1 == 0) {
    page(0x70);
    tail(0x4b);
    page(0x72);
    tail(0x4d);
    latch(0x30);
    cell_put(0x4f);
    latch(0x18);
    cell_put(0x51);
    func_80176F60();
  }
  return;
}



