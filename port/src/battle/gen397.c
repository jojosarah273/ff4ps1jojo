/* FF4 source-port — interpreted module for fn_1x1356c.
 * Ground truth: src/fn_1x1356c.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x1356c(void)

{
  int iVar1;
  
  latch(0x20);
  txt_draw(0xacf);
  latch(2);
  txt_draw(0xad0);
  txt_draw(0xad1);
  wnd_open(0x30);
  label(0xad2);
  latch(6);
  txt_draw(0xacd);
  cell_clear_bank(0xace);
  battle_row_e5();
  do {
    shop_view_run();
    battle_rows_d9d4_prep_gates_x80_x5();
    battle_window_24();
    row_page(0x7a);
    row_read(0x3f);
    iVar1 = sel(0x202);
    if (iVar1 == 0) {
      latch(0x23);
      wnd_fx_pads();
    }
    page_open(0xad2);
    iVar1 = cell_flags_pack(0x202);
  } while (iVar1 != 0);
  battle_c3c_b04_gates_loop_on_a0_v1();
  return;
}



