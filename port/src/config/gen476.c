/* FF4 source-port — interpreted module for func_80127718.
 * Ground truth: src/func_80127718.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80127718(void)
{
    row_open2();
    row_prep(32);
    wnd_open(42768);
    draw_pad(5376);
    row_sync2(83);
    func_800F3D64(3840);
    row_prep_close();
    row_pad();
    row_open2();
    row_open3();
    sep();
    func_800F9200();
    row_pad();
    stat_sync();
    wnd_open(1536);
    row_open();
    func_800F94B8();
    func_8011EA3C();
    func_800F94B8();
    row_pad();
    page(65);
    label(4103);
    label(4105);
    func_800F8F74(4160);
    func_800F8F74(4224);
    func_800F8F74(4288);
    func_800F8F74(4352);
}
