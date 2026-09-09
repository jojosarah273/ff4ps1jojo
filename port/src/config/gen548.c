/* FF4 source-port — interpreted module for func_80123CB4.
 * Ground truth: src/func_80123CB4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F5C64();
extern int func_800F5E48();
extern int func_800F63BC();
extern int func_800F6434();
extern int func_800F6564();
extern int func_800F71DC();
extern int func_800F7594();
extern int func_800F8960();
extern int func_800F9200();
extern int func_800F93DC();
extern int func_800F971C();
extern int func_80126D48();

void func_80123CB4(void)

{
  int iVar1;
  
  func_800F9200();
  txt_set(0x16b7);
  iVar1 = gate(0x202);
  if (iVar1 == 0) {
    wnd_open(0xeb);
    cell_fmt2(0x41);
    sep();
    do {
      func_800F8960(0x1b00);
      step2();
      func_800F5E48();
      iVar1 = poll_go(0x202);
    } while (iVar1 != 0);
    func_80126D48();
  }
  row_close2();
  return;
}



