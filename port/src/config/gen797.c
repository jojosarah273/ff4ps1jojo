/* FF4 source-port — interpreted module for func_80138920.
 * Ground truth: src/func_80138920.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80138920(void)
{
    /* ability wrapper: 0x1A88 text, 8016EA9C/80138A6C/80122114 rows
       + the 0x100 prelude; linear. */
    row_open2();
    row_open3();
    wnd_open(0x100);
    row_open();
    func_800F94B8();
    latch(0x7E);
    func_800F9200();
    row_pad();
    func_8016EA9C();
    func_800F8F74(0x1A88);
    func_80138A6C();
    sep();
    stat_sync();
    func_80122114();
    func_800F94B8();
    row_pad();
    return;
}
