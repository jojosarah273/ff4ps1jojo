/* FF4 source-port — interpreted module for fn_1x02c30.
 * Ground truth: src/fn_1x02c30.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x02c30(void)

{
  txt_set(0x1706);
  cell_put(0x1a);
  txt_set(0x1707);
  poll_spin();
  cell_put(0x1b);
  battle_menu_c3c_b04_gates_v0_gate();
  page(0x1e);
  tail(0xa3);
  row_page(6);
  txt_draw(0x70c);
  key_page(0x1b);
  poll_pair(0x1a);
  battle_menu_c3c_b04_gates_v0_gate();
  page(0x1e);
  tail(0xa9);
  row_page(6);
  txt_draw(0x70f);
  key_page(0x1a);
  battle_menu_c3c_b04_gates_v0_gate();
  page(0x1e);
  tail(0xa1);
  row_page(6);
  txt_draw(0x70b);
  key_page(0x1a);
  battle_menu_c3c_b04_gates_v0_gate();
  page(0x1e);
  tail(0xa5);
  row_page(6);
  txt_draw(0x70d);
  key_page(0x1b);
  poll_pair(0x1a);
  battle_menu_c3c_b04_gates_v0_gate();
  page(0x1e);
  tail(0xa7);
  row_page(6);
  txt_draw(0x70e);
  return;
}



