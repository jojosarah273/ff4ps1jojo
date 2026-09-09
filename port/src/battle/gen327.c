/* FF4 source-port — interpreted module for func_80102C30.
 * Ground truth: src/func_80102C30.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F5CCC();
extern int func_800F5DA0();
extern int func_800F62BC();
extern int func_800F6564();
extern int func_800F6630();
extern int func_800F7270();
extern int func_800F8188();
extern int func_800F824C();
extern int func_800F8D6C();
extern int func_80102D68();

void func_80102C30(void)

{
  txt_set(0x1706);
  cell_put(0x1a);
  txt_set(0x1707);
  poll_spin();
  cell_put(0x1b);
  func_80102D68();
  page(0x1e);
  tail(0xa3);
  row_page(6);
  txt_draw(0x70c);
  key_page(0x1b);
  poll_pair(0x1a);
  func_80102D68();
  page(0x1e);
  tail(0xa9);
  row_page(6);
  txt_draw(0x70f);
  key_page(0x1a);
  func_80102D68();
  page(0x1e);
  tail(0xa1);
  row_page(6);
  txt_draw(0x70b);
  key_page(0x1a);
  func_80102D68();
  page(0x1e);
  tail(0xa5);
  row_page(6);
  txt_draw(0x70d);
  key_page(0x1b);
  poll_pair(0x1a);
  func_80102D68();
  page(0x1e);
  tail(0xa7);
  row_page(6);
  txt_draw(0x70e);
  return;
}



