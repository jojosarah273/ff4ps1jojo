/* FF4 source-port — interpreted module for func_801033E0.
 * Ground truth: src/func_801033E0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

extern int func_801030F8();
extern int func_801034E0();
extern int func_8017559C();

void func_801033E0(void)

{
  int iVar1;
  
  latch(5);
  txt_draw(0x1704);
  latch(3);
  cell_put(0xac);
  txt_draw(0x1705);
  row_page(0xb1);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    row_page(0xe1);
    iVar1 = gate(2);
    if (iVar1 == 0) {
      latch(0x20);
      cell_put(0xad);
      latch(0x10);
      cell_put(0xb8);
      func_8017559C();
      latch(0xf);
      txt_draw(0x6fd);
    }
    else {
      func_801030F8();
      latch(0x20);
      cell_put(0x79);
      latch(0xf);
      txt_draw(0x6fd);
      func_801034E0();
    }
  }
  else {
    battle_rows_run();
    open_row(0x79);
    func_801034E0();
  }
  return;
}



