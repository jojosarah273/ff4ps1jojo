/* FF4 source-port — interpreted module for func_8011F3F8.
 * Ground truth: src/func_8011F3F8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011F3F8(void)
{
    /* shared scroll-column: 0x5A window, 0x3E8/0x4200 gates, 0x15B/0x15D
       texts, 0x5E window cells; L11F430 wait loop, then the 8011F67C
       icon rows, 0x5A/0x5B/0x5D confirm cells, 960C/95A0 close. */
    row_open();
    row_sync();
    row_prep(0x20);
    wnd_open(0x7F);
    tail(0x5A);
L11f430:
    for (;;) {
        func_800F62F0(0x5A);
        sep_b();
        func_800F80D0(0x3E8);
        if (func_800F53FC() != 0)
            break;
    }
    sep_a();
    cell_pos_fwd(0x3E8);
    row_open3();
    wnd_open(0x4200);
    row_open();
    cell_cursor_read();
    row_prep_close();
    func_8011F67C();
    row_page(0x14);
    sep_a();
    row_open_w(0x80);
    cell_pull_c8_lo(0x15B);
    row_page(0x16);
    sep();
    func_8011F67C();
    row_page(0x14);
    sep_a();
    row_open_w(0x80);
    cell_pull_c8_lo(0x15D);
    row_page(0x16);
    cell_cursor_read();
    sep_a();
    row_open_w(0x80);
    cell_put(0x5E);
    row_page(0x5A);
    io_poll(0x80);
    if (io_just() == 0)
        goto L11F654;
    latch(0xFF);
    cell_put(0x5A);
    row_page(0x5B);
    io_poll(0x80);
    if (io_just() == 0)
        goto L11F654;
    latch(0xFF);
    cell_put(0x5B);
    row_page(0x5D);
    io_poll(0x80);
    if (io_just() == 0)
        goto L11F654;
    latch(0xFF);
    cell_put(0x5D);
L11F654:
    row_done();
    row_close();
    return;
}
