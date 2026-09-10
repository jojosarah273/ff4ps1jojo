/* FF4 source-port — interpreted module for cell_0xffcac.
 * Ground truth: src/cell_0xffcac.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"


extern int func_800F53C0();
extern int func_800F53D4();
extern int func_800F5480();
extern int func_800F5958();
extern int func_800F62BC();


extern int func_800F654C();
extern int func_800F6558();
extern int func_800F6630();
extern int func_800F6B68();


extern int func_800F80D0();

extern int func_800F8FB8();

extern int func_800F9660();
extern int func_800FD804();

void cell_0xffcac(void)

{
  int iVar1;
  
  open_row(0xc1);
  row_page(0xa2);
  row_read(1);
  iVar1 = ticker_reblend(2);
  if (iVar1 == 0) {
    wnd_open(0);
    do {
      txt_cell(0x1000);
      iVar1 = gate(2);
      if (iVar1 == 0) {
        txt_cell(0x1003);
        iVar1 = gate(0x80);
        if (iVar1 == 0) {
          txt_cell(0x1004);
          row_read(0x40);
          iVar1 = ticker_reblend(0x202);
          if (iVar1 == 0) {
            key_page(0xc1);
            row_prep(0x20);
            cell_sink8_9(0x1007);
            iVar1 = cell_flags_pos0(2);
            if (iVar1 == 0) {
              sep_b();
              cell_pos_back2(0x32);
              cell_stamp8_9(0x1007);
              iVar1 = io_just();
              if ((iVar1 != 0) || (iVar1 = io_go(), iVar1 == 0)) {
                row_sync2(1);
                cell_stamp8_9(0x1007);
              }
            }
            row_sync2(0);
            row_prep_close();
          }
        }
      }
      rows_swap44_54();
      poll_t(0x140);
      iVar1 = io_just();
    } while (iVar1 == 0);
  }
  row_page(0xc1);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    latch(0x7b);
    wnd_fx_pads();
  }
  return;
}



