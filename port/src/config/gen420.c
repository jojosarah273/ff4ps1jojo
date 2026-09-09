/* FF4 source-port — interpreted module for func_80127538.
 * Ground truth: src/func_80127538.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80127538(void)
{
    /* status rows: 0x73/0x74 windows, 0xA/0xC/0x5A/0x5B/0x5D/0x5E
       cells, 80123958/8011F360/8011F3F8 rows. */
    row_sync();
    cell_put(0x73);
    tail(0x74);
    row_open2();
    latch(0x7E);
    cell_cursor_dec();
    row_pad();
    func_80123958();
    func_80123958();
    page(0x73);
    row_page(0x1D);
    func_8011F360();
    io_poll(0xFF);
    if (io_just() == 0)
        goto L1275C0;
    latch(0x80);
L1275C0:
    cell_pull_c8(0xA);
    stat_sync();
    cell_pull_c8(0xC);
    row_prep(0x20);
    row_read2(0x73);
    row_prep_close();
    func_8011F3F8();
    row_page(0x5A);
    cell_pull_c8();
    row_page(0x5B);
    cell_pull_c8(2);
    row_page(0x5D);
    cell_pull_c8(4);
    row_page(0x5E);
    cell_pull_c8(6);
    latch(0xC8);
    cell_pull_c8(8);
    row_pad();
    row_done();
    return;
}
