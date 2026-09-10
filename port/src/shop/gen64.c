/* FF4 source-port — interpreted module for fn_1x6d850.
 * Ground truth: src/fn_1x6d850.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"

void fn_1x6d850(void)

{
  int iVar1;
  
  txt_set(0x7d20);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    row_open2();
    sep();
    cell_cursor_dec();
    row_pad();
    latch(0);
    txt_draw(0x2115);
    page(0x92);
    label(0x2116);
    page(0x90);
    label(0x4352);
    latch(0x7e);
    txt_draw(0x4354);
    latch(0);
    txt_draw(0x4350);
    latch(0x18);
    txt_draw(0x4351);
    wnd_open(0x100);
    label(0x4355);
    catalog_dispatch(0x50);
    latch(0x80);
    txt_draw(0x2115);
    row_pad();
    row_prep(0x20);
    row_read2(0x90);
    sep_a();
    cell_pos_fwd(0x100);
    cell_put_hi9(0x90);
    row_read2(0x92);
    sep_a();
    cell_pos_fwd(0x100);
    cell_put_hi9(0x92);
    sep();
    row_prep_close();
    page(0x92);
    poll_t(0x4000);
    iVar1 = io_just();
    if (iVar1 != 0) {
      cell_clear_bank(0x7d20);
    }
  }
  return;
}



