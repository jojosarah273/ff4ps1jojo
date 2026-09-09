/* FF4 source-port — interpreted module for func_80149D68.
 * Ground truth: src/func_80149D68.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80149D68(void)
{
    /* battle confirm: 80075FE0/8007411C/80072068 rows with the
       9644/6CF4/6558/8274 cell draws; 0x4D/0xD/0xD windows. */
    func_800F9200();
    sep_b();
    func_800F8058(0x4D);
    func_800F9200();
    func_800F9200();
    func_800F6C68();
    wnd_open(0xC);
    func_80075FE0();
    row_close2();
    row_sel_cell_cur();
    row_prep(0x20);
    row_sync2(0x80);
    func_800F8274();
    func_800F6CF4();
    wnd_open_cur();
    sep();
    row_prep_close();
    latch(0xD);
    func_8007411C();
    row_close2();
    row_sel_cell_cur();
    row_prep(0x20);
    func_800F6CF4();
    sep();
    row_prep_close();
    latch(0xD);
    func_80072068();
    row_close2();
    return;
}
