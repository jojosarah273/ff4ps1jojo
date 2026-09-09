/* FF4 source-port — interpreted module for func_801743E0.
 * Ground truth: src/func_801743E0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
















void func_801743E0(void)

{
  int iVar1;
  
  txt_set(0x1700);
  io_poll(3);
  iVar1 = io_just();
  if (iVar1 == 0) {
    cell_clear_bank(0x211c);
    cell_clear_bank(0x211c);
    cell_clear_bank(0x211d);
    cell_clear_bank(0x211d);
    latch(0xf0);
    cell_pull_c8_lo(0x7f5a00);
    cell_pull_c8_lo(0x7f5a03);
    txt_set(0x1704);
    io_poll(6);
    iVar1 = io_just();
    if (iVar1 == 0) {
      row_page(0xad);
      sep_b();
      cell_pos_back(0x10);
      row_sel_cell_cur();
      sep_a();
      row_open_w(0);
      cell_pull_c8_lo(0x7f5a02);
      cell_pull_c8_lo(0x7f5a05);
      latch(0);
      cell_pull_c8_lo(0x7f5a01);
      latch(0xe0);
      cell_pull_c8_lo(0x7f5a04);
    }
    else {
      row_page(0xad);
      sep_b();
      cell_pos_back(0x10);
      row_read(0xfe);
      sep_a();
      row_open_w(0x22);
      cell_pull_c8_lo(0x7f5a02);
      cell_pull_c8_lo(0x7f5a05);
      latch(0);
      cell_pull_c8_lo(0x7f5a01);
      latch(0xe0);
      cell_pull_c8_lo(0x7f5a04);
    }
    latch(0x80);
    cell_pull_c8_lo(0x7f5a06);
    cell_clear_bank(0x420c);
    latch(0x42);
    txt_draw(0x4340);
    txt_draw(0x4350);
    latch(0x1b);
    txt_draw(0x4341);
    latch(0x1e);
    txt_draw(0x4351);
    wnd_open(0x5a00);
    label(0x4342);
    label(0x4352);
    latch(0x7f);
    txt_draw(0x4344);
    txt_draw(0x4354);
    txt_draw(0x4347);
    txt_draw(0x4357);
  }
  return;
}



