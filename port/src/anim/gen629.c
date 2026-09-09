/* FF4 source-port — interpreted module for func_801702DC.
 * Ground truth: src/func_801702DC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F6C68();
extern int func_800F7270();
extern int func_800F824C();
extern int func_800F87DC();
extern int func_800F9330();
extern int func_800F9410();
extern int func_800F9644();
extern int func_800F9660();

void func_801702DC(void)

{
  row_open();
  cell_put(0x43);
  page(0x43);
  func_800F6C68(0x14fe79);
  cell_put(0x43);
  page(0x43);
  row_prep(0x20);
  func_800F9410();
  func_800F87DC(0x1a05);
  row_prep_close();
  return;
}



