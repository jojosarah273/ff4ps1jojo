/* FF4 source-port — interpreted module for func_80128AD4.
 * Ground truth: src/func_80128AD4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F6658();
extern int func_800F8274();
extern int func_800F9200();
extern int func_800F926C();
extern int func_800F9448();
extern int func_800F9644();
extern int func_800F9660();
extern int func_801208C8();

void func_80128AD4(void)

{
  row_open2();
  func_800F8274(0x45);
  row_prep_close();
  latch(0x7e);
  func_800F9200();
  row_pad();
  row_prep(0x20);
  row_read2(0x45);
  func_801208C8();
  row_pad();
  return;
}



