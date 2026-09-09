/* FF4 source-port — interpreted module for func_80137BB8.
 * Ground truth: src/func_80137BB8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80137BB8(void)
{
    txt_set(0x1A02);
    if (gate(0x202) != 0)
        goto L7c00;
    func_8012219C();
    return;
L7c00:
    func_80126610();
L7c08:
    func_80137B18();
    func_80178BB4();
    func_801793F8();
L7c24:
    /* v1/v0 branch */
    func_80178BB4();
    return;
    /* v1/v0 branch */
    func_80138788();
    func_80137B18();
    /* v1/v0 branch */
    func_80187CD0();
    func_80138730();
    latch(1);
    txt_draw(0x1B47);
    latch(1);
    txt_draw(0x1A3C);
    func_80127668();
    func_80124298();
    func_801280D4();
    goto L7d40;
L7cc8:
    func_80128598();
    latch(1);
    txt_draw(0x1B47);
    txt_set(0x1A3C);
    if (gate(0x202) != 0)
        goto L7d10;
    latch(1);
    txt_draw(0x1A3C);
L7d10:
    func_80127668();
    func_80124298();
    func_801280D4();
    func_80127168();
    if (io_go() == 0)
        goto L7ec0;
L7d40:
    func_80127808();
    if (io_go() == 0)
        goto L80dc;
    /* beqz/v1-s1 branch */
    func_801793F8();
    /* v1/s1 branch */
    func_80138788();
    goto L7c00;
    func_801382C8();
    txt_set(0x1A3C);
    poll_spin();
    if (poll_go(0x80) != 0)
        goto L7e88;
    cell_put(0x46);
    open_row(0x45);
    cell_fmt2(0x45);
    wnd_open(0xF600);
    row_open2();
    row_prep(0x20);
    row_sync2(0x7FF);
    func_800F3D64(0x7E70);
    row_prep_close();
    row_pad();
    func_80138788();
    func_8013813C();
    /* v1/v0 branch */
    func_80187CD0();
L7e88:
    func_801221EC();
    func_801210AC();
    draw_pad_cur();
    func_8011EF30();
    draw_pad_cur();
    goto L7ed8;
L7ec0:
    draw_pad_cur();
L7ed8:
    func_8011FBA4();
    func_80138788();
    /* v1/v0 + s2 branches */
    func_80138458();
    func_80177DEC();
    func_80177DEC();
    func_80177DEC();
    func_801793F8();
    /* v1/v0 branch */
    func_801382C8();
    func_80127C70();
    func_801221EC();
    func_801210AC();
    draw_pad_cur();
    func_8011EF30();
    draw_pad_cur();
    func_8011FBA4();
    func_80138788();
    /* v1/v0 + s2 branches */
    func_8013836C();
L7fcc:
    func_801263F0();
    /* v0/s0, v0/s1 branches */
    func_80145AA0();
    func_80145AA0();
    func_80138620();
    /* v1/v0 branch */
    func_801383B8();
    /* s3/s2 branches */
    func_8011FF40();
    /* v0/s1 branch */
    func_80138408();
    func_80126610();
    /* v1/v0 + s2 branches */
    func_80178BB4();
    func_801793F8();
    /* v1/v0 + s2 branches */
    func_80138730();
    goto L7c24;
L80dc:
    draw_pad_cur();
    func_8011EF30();
    draw_pad_cur();
    func_80126610();
    func_80138788();
    goto L7c08;
    return;
}
