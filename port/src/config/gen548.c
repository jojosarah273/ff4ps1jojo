/* FF4 source-port — interpreted module for func_80123CB4.
 * Ground truth: src/func_80123CB4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"











extern int func_80126D48();

void func_80123CB4(void)

{
  int iVar1;
  
  cell_cursor_dec();
  txt_set(0x16b7);
  iVar1 = gate(0x202);
  if (iVar1 == 0) {
    wnd_open(0xeb);
    cell_fmt2(0x41);
    sep();
    do {
      cell_pull_c8(0x1b00);
      step2();
      cell_set50_from54();
      iVar1 = poll_go(0x202);
    } while (iVar1 != 0);
    func_80126D48();
  }
  row_close2();
  return;
}



