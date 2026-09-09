/* FF4 source-port — interpreted module for func_80120CA4.
 * Ground truth: src/func_80120CA4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F4064();
extern int func_800F5410();
extern int func_800F5480();
extern int func_800F5B8C();
extern int func_800F5DA0();
extern int func_800F654C();
extern int func_800F6658();
extern int func_800F71DC();
extern int func_800F80D0();
extern int func_800F824C();
extern int func_800F8274();
extern int func_800F8D6C();
extern int func_800F9644();
extern int func_800F9660();
extern int func_8011EE34();
extern int func_8011F320();

void func_80120CA4(void)

{
  int iVar1;
  
  latch(0x19);
  cell_put(0x45);
  row_prep(0x20);
  row_read2(0x35);
  sep_a();
  func_800F4064(0x600);
  func_800F8274(0x1d);
  row_read2(0x29);
  sep_a();
  func_800F4064(0xc00);
  func_800F8274(0x1f);
  row_prep_close();
  latch(0x7e);
  cell_put(0x21);
  wnd_open(0x80);
  tail(0x22);
  do {
    func_8011F320();
    func_8011EE34();
    row_prep(0x20);
    row_read2(0x1d);
    sep_b();
    func_800F80D0(0x40);
    func_800F8274(0x1d);
    row_read2(0x1f);
    sep_b();
    func_800F80D0(0x80);
    func_800F8274(0x1f);
    row_prep_close();
    poll_pair(0x45);
    iVar1 = poll_go(0x202);
  } while (iVar1 != 0);
  return;
}



