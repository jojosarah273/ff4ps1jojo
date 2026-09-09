/* FF4 source-port — interpreted module for func_80131B80.
 * Ground truth: src/func_80131B80.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F4264();
extern int func_800F6434();
extern int func_800F6B68();
extern int func_800F6BE0();
extern int func_800F87DC();
extern int func_800F9200();
extern int func_800F93DC();
extern int func_800F9644();
extern int func_800F9660();
extern int func_801224D0();
extern int func_801321B4();

void func_80131B80(void)

{
  int iVar1;
  
  func_800F9200();
  func_801224D0();
  txt_cell(0x1b8b);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    func_801321B4();
    row_prep(0x20);
    func_800F6BE0(3);
    func_800F4264(0x7c80);
    func_800F87DC(3);
    row_prep_close();
  }
  row_close2();
  return;
}



