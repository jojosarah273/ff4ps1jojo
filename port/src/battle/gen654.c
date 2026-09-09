/* FF4 source-port — interpreted module for func_8010F1D4.
 * Ground truth: src/func_8010F1D4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F6564();
extern int func_800F71DC();
extern int func_800F7210();
extern int func_800F8188();
extern int func_800F824C();
extern int func_800F8D00();
extern int func_800F8FB8();
extern int func_801035B0();
extern int func_8011AB18();
extern int func_8011EA5C();

void func_8010F1D4(void)

{
  wnd_open(0);
  label(0x172c);
  latch(6);
  txt_draw(0x1704);
  latch(3);
  cell_put(0xac);
  open_row(0xe1);
  page_open(0x1725);
  label(0x1706);
  txt_set(0x1727);
  func_8011AB18();
  func_801035B0();
  func_8011EA5C();
  return;
}



