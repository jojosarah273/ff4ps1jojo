/* FF4 source-port — interpreted module for func_8011D8E0.
 * Ground truth: src/func_8011D8E0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"











extern int func_8011CC98();
extern int func_8011D068();
extern int func_8011D9F0();
extern int func_8011EA14();

void func_8011D8E0(void)

{
  int iVar1;
  
  latch(0x80);
  txt_draw(0x2115);
  wnd_fx_tags();
  latch(1);
  txt_draw(0x4300);
  func_8011EA14();
  latch(0x20);
  cell_put(7);
  latch(0);
  cell_put(8);
  do {
    row_page(8);
    row_read(0x1f);
    cell_put(0x3e);
    latch(0);
    cell_put(0x3d);
    page(0x3d);
    tail(0x43);
    func_8011CC98();
    func_8011D068();
    func_8011D9F0();
    latch(0x10);
    cell_put(0x3d);
    page(0x3d);
    tail(0x43);
    func_8011CC98();
    func_8011D068();
    func_8011D9F0();
    key_page(8);
    poll_pair(7);
    iVar1 = poll_go(2);
  } while (iVar1 == 0);
  return;
}



