/* FF4 source-port — interpreted module for func_800FFCAC.
 * Ground truth: src/func_800FFCAC.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F4120();
extern int func_800F4248();
extern int func_800F53C0();
extern int func_800F53D4();
extern int func_800F5480();
extern int func_800F5958();
extern int func_800F62BC();
extern int func_800F6434();
extern int func_800F64EC();
extern int func_800F654C();
extern int func_800F6558();
extern int func_800F6630();
extern int func_800F6B68();
extern int func_800F6BE0();
extern int func_800F71DC();
extern int func_800F80D0();
extern int func_800F87DC();
extern int func_800F8FB8();
extern int func_800F9644();
extern int func_800F9660();
extern int func_800FD804();
extern int func_80117DF8();

void func_800FFCAC(void)

{
  int iVar1;
  
  open_row(0xc1);
  row_page(0xa2);
  row_read(1);
  iVar1 = sel(2);
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
          iVar1 = sel(0x202);
          if (iVar1 == 0) {
            key_page(0xc1);
            row_prep(0x20);
            func_800F6BE0(0x1007);
            iVar1 = func_800F64EC(2);
            if (iVar1 == 0) {
              sep_b();
              func_800F80D0(0x32);
              func_800F87DC(0x1007);
              iVar1 = io_just();
              if ((iVar1 != 0) || (iVar1 = io_go(), iVar1 == 0)) {
                row_sync2(1);
                func_800F87DC(0x1007);
              }
            }
            row_sync2(0);
            row_prep_close();
          }
        }
      }
      func_80117DF8();
      poll_t(0x140);
      iVar1 = io_just();
    } while (iVar1 == 0);
  }
  row_page(0xc1);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    latch(0x7b);
    func_800FD804();
  }
  return;
}



