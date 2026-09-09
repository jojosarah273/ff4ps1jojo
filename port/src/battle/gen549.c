/* FF4 source-port — interpreted module for func_8011EBBC.
 * Ground truth: src/func_8011EBBC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F3D48();
extern int func_800F654C();
extern int func_800F81E8();
extern int func_800F9200();
extern int func_800F926C();
extern int func_800F9298();
extern int func_800F9448();
extern int func_800F94B8();
extern int func_800F971C();
extern int func_8011EC44();

void func_8011EBBC(void)

{
  row_open2();
  row_open3();
  sep();
  func_800F81E8(0x4200);
  latch(0x7e);
  func_800F9200();
  row_pad();
  func_8011EC44();
  latch(0x80);
  func_800F81E8(0x2100);
  sep();
  stat_sync();
  func_800F94B8();
  row_pad();
  return;
}



