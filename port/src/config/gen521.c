/* FF4 source-port — interpreted module for func_80150A30.
 * Ground truth: src/func_80150A30.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80150A30(void)
{
    /* battle splash: 0x30 window, 0x7E window, 801582D8 row; linear
       render + 0x30 icon set. */
    func_800F8210(0x30);
    row_prep_cur();
    row_open2();
    row_open3();
    func_800F922C();
    row_open();
    row_sync();
    func_800F54B8();
    row_sync2_cur();
    row_prep_close();
    row_prep(0x10);
    wnd_open_cur();
    row_open();
    func_800F94B8();
    latch(0x7E);
    func_800F9200();
    row_pad();
    func_801582D8();
    row_prep(0x30);
    row_done();
    row_close();
    func_800F9410();
    func_800F94B8();
    row_pad();
    return;
}
