/* FF4 source-port — interpreted module for func_800FA460.
 * Ground truth: src/func_800FA460.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F54B8();
extern int func_800F654C();



extern int func_800F8D00();
extern int func_800F8F74();
extern int func_800F8FB8();
extern int func_800FE870();

uint32_t shop_pass_a460(void)

{
  func_800F654C(0x80);
  txt_draw(0x2100);
  func_800F8F74(0x420c);
  func_800F8F74(0x4200);
  func_800F54B8();
  func_800FE870();
  func_800F8FB8(0x7a);
  func_800F8FB8(0x94);
  func_800F8FB8(0xeb);
  func_800F8FB8(0xe9);
  func_800F8FB8(0xeb);
  func_800F8FB8(0xec);
  func_800F8FB8(0xed);
  func_800F8FB8(0xea);
  func_800F8FB8(0xe7);
  func_800F8FB8(0xe8);
  func_800F8FB8(0xd4);
  func_800F8FB8(0xab);
  func_800F8FB8(0xcf);
  func_800F8FB8(0xda);
  func_800F8FB8(0xc9);
  func_800F8FB8(0xc4);
  func_800F8FB8(0xc1);
  func_800F654C(1);
  cell_put(0x54);
  cell_put(0x55);
  cell_put(0x50);
  cell_put(0x51);
  cell_put(0x52);
  cell_put(0x53);
  cell_put(0x56);
  cell_put(0x57);
  func_800F8FB8(0x66);
  func_800F8FB8(0x67);
  func_800F8FB8(0x68);
  func_800F8FB8(0x69);
  func_800F654C(0x10);
  cell_put(0xad);
  wnd_open(0);
  func_800F8D00(0x6fb);
  return;
    return 0;
}
