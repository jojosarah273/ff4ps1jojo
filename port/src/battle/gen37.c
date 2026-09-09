/* FF4 source-port — interpreted module for func_80109B08.
 * Ground truth: src/func_80109B08.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"



















extern int func_80109D68();

void func_80109B08(void)

{
  int iVar1;
  
  row_page(0xed);
  iVar1 = gate(0x202);
  if (iVar1 != 0) {
    open_row(0xed);
    row_page(0xba);
    row_read(3);
    cell_put(0x13);
    latch(4);
    cell_put(0x12);
    row_page(0x13);
    sep_a();
    row_open_w(0x2c);
    cell_put(0x13);
    wnd_open(0x774);
    tail(0x14);
    wnd_open(0x834);
    tail(0x16);
    cell_clear_bank(0x2115);
    wnd_fx_tags();
    cell_clear_bank(0x4300);
    latch(4);
    cell_put(0x11);
    do {
      page(0x16);
      label(0x4302);
      page(0x12);
      label(0x2116);
      wnd_open(0x18);
      label(0x4305);
      func_80109D68();
      row_page(0x12);
      sep_a();
      row_open_w(0x20);
      cell_put(0x12);
      row_page(0x13);
      row_open_w(0);
      cell_put(0x13);
      cell_clear_bank(0x420b);
      page(0x14);
      label(0x4302);
      page(0x12);
      label(0x2116);
      wnd_open(0x18);
      label(0x4305);
      func_80109D68();
      row_page(0x12);
      sep_a();
      row_open_w(0x20);
      cell_put(0x12);
      row_page(0x13);
      row_open_w(0);
      io_poll(0x30);
      iVar1 = io_just();
      if (iVar1 != 0) {
        latch(0x2c);
      }
      cell_put(0x13);
      row_page(0x14);
      sep_a();
      row_open_w(0x18);
      cell_put(0x14);
      row_page(0x15);
      row_open_w(0);
      cell_put(0x15);
      row_page(0x16);
      sep_a();
      row_open_w(0x18);
      cell_put(0x16);
      row_page(0x17);
      row_open_w(0);
      cell_put(0x17);
      poll_pair(0x11);
      iVar1 = poll_go(2);
    } while (iVar1 == 0);
    key_page(0xba);
  }
  return;
}



