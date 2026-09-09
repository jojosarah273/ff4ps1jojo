/* FF4 source-port — interpreted module for func_8011EDA4.
 * Ground truth: src/func_8011EDA4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F3D48();
extern int func_800F654C();
extern int func_800F81E8();
extern int func_800F9200();
extern int func_800F93DC();
extern int func_8016EA1C();

void func_8011EDA4(void)

{
  func_800F9200();
  latch(0);
  func_800F81E8(0x140);
  func_8016EA1C();
  latch(0);
  stat_sync();
  row_close2();
  return;
}



