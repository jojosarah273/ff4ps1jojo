/* FF4 source-port — interpreted module for func_80134C74.
 * Ground truth: src/func_80134C74.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80134C74(void)
{
    /* ability wrapper: 8016EA9C/80123D3C preps, 0x1B1D/0x1BB1/0x1BB2
       rows, then 80134FF4 sub-dispatcher; loop L134D38 pulls
       80194700/80194394. */
    row_open2();
    row_open3();
    wnd_open(0x100);
    row_open();
    func_800F94B8();
    latch(0x7E);
    func_800F9200();
    row_pad();
    func_8016EA9C();
    func_80123D3C();
    func_8017F8F8();
    func_8017F8F8();
    func_8017F8F8();
L134d38:
    for (;;) {
        func_80194700();
        func_80194394();
        wnd_open_cur();
        label(0x1B1D);
        latch(0x20);
        cell_put(0xC1);
        func_800F8F74(0x1BB1);
        func_800F8F74(0x1BB2);
        func_8016EA7C();
        latch(0x20);
        cell_put(0x3F);
        func_800F8F74(0x1BB4);
        func_80123FB4();
        func_801241B8();
        func_80126330();
        func_8011F6A4();
        func_801378B0();
        latch(0xA);
        txt_draw(0x1BB4);
        func_80134FF4();
        func_80126610();
        func_80122114();
        sep();
        stat_sync();
        func_800F94B8();
        row_pad();
        return;
    }
}
