/* FF4 source-port — interpreted module for fn_1x25a64.
 * Ground truth: src/fn_1x25a64.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


void fn_1x25a64(void)

{
  int iVar1;
  
  sep();
  do {
    midrow_pad88();
    config_equip_form_confirm_x45_x46();
    shop_rows_x45_x46_windows_x1_x43_t();
    cell_set50_from40();
    io_poll(5);
    iVar1 = io_just();
  } while (iVar1 == 0);
  midrow_pad88();
  battle_state_dc400();
  return;
}



