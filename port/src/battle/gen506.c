/* FF4 source-port — interpreted module for func_80114D18.
 * Ground truth: src/func_80114D18.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F654C();
extern int func_800F7270();
extern int func_800F7500();
extern int func_800F824C();
extern int func_800F8D6C();
extern int func_800F8EBC();
extern int func_800FE778();
extern int func_800FE870();
extern int func_8011581C();
extern int func_80115A34();
extern int func_80172BA8();

void func_80114D18(void)

{
  func_800FE778();
  func_800FE870();
  func_80172BA8();
  page(0x2c);
  tail(0xc);
  page(0x2e);
  tail(0xe);
  latch(0x1c);
  cell_put(0x91);
  latch(0x78);
  cell_put(0x8f);
  draw_pad(0x180);
  latch(0x60);
  cell_put(0x92);
  func_8011581C();
  draw_pad(0x70);
  row_info(0xe);
  draw_pad(0x140);
  func_80115A34();
  return;
}



