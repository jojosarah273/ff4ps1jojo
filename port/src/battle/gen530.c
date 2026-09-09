/* FF4 source-port — interpreted module for func_80113E3C.
 * Ground truth: src/func_80113E3C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80113E3C(void)
{
    /* battle rows (twin of 80113CCC): 0x8F/0x5F/0xAD/0x17C/0x6FB/0x24
       windows, 80113F3C/8011EA5C rows; loop L113E84 on 41E8(2). */
    cell_put(0x8F);
    latch(0x5F);
    cell_put(0xAD);
    wnd_open(0x17C);
    label(0x6FB);
    tail(0x24);
    latch(0x10);
    cell_put(0x90);
L113e84:
    for (;;) {
        func_800FE7D8();
        func_80113F3C();
        row_prep(0x20);
        func_800F658C(0x6FB);
        row_scan_cur();
        row_scan_cur();
        func_800F81B0(0x6FB);
        row_read2(0x24);
        row_scan_cur();
        row_scan_cur();
        func_800F8274(0x24);
        func_800F4264(0xFF);
        row_prep_close();
        cell_put(0xAD);
        if (func_800F41E8(2) == 0)
            continue;
        break;
    }
    func_800FE8B4();
    func_8011EA5C();
    return;
}
