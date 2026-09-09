/* FF4 source-port — interpreted module for func_8016D850.
 * Ground truth: src/func_8016D850.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
extern int func_800F4064();
extern int func_800F53D4();
extern int func_800F5410();
extern int func_800F5958();
extern int func_800F6434();
extern int func_800F654C();
extern int func_800F6564();
extern int func_800F6658();
extern int func_800F71DC();
extern int func_800F7270();
extern int func_800F8188();
extern int func_800F8274();
extern int func_800F8D00();
extern int func_800F8F74();
extern int func_800F9200();
extern int func_800F926C();
extern int func_800F9448();
extern int func_800F9644();
extern int func_800F9660();
extern int func_800F971C();
extern int func_800F9868();

void func_8016D850(void)

{
  int iVar1;
  
  txt_set(0x7d20);
  iVar1 = gate(2);
  if (iVar1 == 0) {
    row_open2();
    sep();
    func_800F9200();
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
    func_800F9868(0x50);
    latch(0x80);
    txt_draw(0x2115);
    row_pad();
    row_prep(0x20);
    row_read2(0x90);
    sep_a();
    func_800F4064(0x100);
    func_800F8274(0x90);
    row_read2(0x92);
    sep_a();
    func_800F4064(0x100);
    func_800F8274(0x92);
    sep();
    row_prep_close();
    page(0x92);
    poll_t(0x4000);
    iVar1 = io_just();
    if (iVar1 != 0) {
      func_800F8F74(0x7d20);
    }
  }
  return;
}



