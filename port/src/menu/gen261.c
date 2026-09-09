/* FF4 source-port — interpreted module for func_800FA460.
 * Ground truth: src/func_800FA460.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F54B8();
extern int func_800F654C();
extern int func_800F71DC();
extern int func_800F8188();
extern int func_800F824C();
extern int func_800F8D00();
extern int func_800F8F74();
extern int func_800F8FB8();
extern int func_800FE870();

void func_800FA460(void)

{
  latch(0x80);
  txt_draw(0x2100);
  func_800F8F74(0x420c);
  func_800F8F74(0x4200);
  func_800F54B8();
  func_800FE870();
  open_row(0x7a);
  open_row(0x94);
  open_row(0xeb);
  open_row(0xe9);
  open_row(0xeb);
  open_row(0xec);
  open_row(0xed);
  open_row(0xea);
  open_row(0xe7);
  open_row(0xe8);
  open_row(0xd4);
  open_row(0xab);
  open_row(0xcf);
  open_row(0xda);
  open_row(0xc9);
  open_row(0xc4);
  open_row(0xc1);
  latch(1);
  cell_put(0x54);
  cell_put(0x55);
  cell_put(0x50);
  cell_put(0x51);
  cell_put(0x52);
  cell_put(0x53);
  cell_put(0x56);
  cell_put(0x57);
  open_row(0x66);
  open_row(0x67);
  open_row(0x68);
  open_row(0x69);
  latch(0x10);
  cell_put(0xad);
  wnd_open(0);
  label(0x6fb);
  return;
}



