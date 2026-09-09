/* FF4 source-port — interpreted module for func_801237A8.
 * Ground truth: src/func_801237A8.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801237A8(void)
{
    /* rows: 0x16A4/0x73/0x16A5/0x74 texts/windows, 80123958 (x2) +
       80123908/8011F360/80123878 rows; 53C0 gate. */
    txt_set(0x16A4);
    cell_put(0x73);
    page_open(0x16A5);
    tail(0x74);
    func_80123958();
    func_80123958();
    page(0x73);
    poll_t(0x3E7);
    if (io_go() == 0)
        goto L123828;
    draw_pad_cur();
    func_80123908();
    row_page(0x5B);
    func_800F8960(0x56C);
    return;
L123828:
    cell_fmt2(0x41);
    row_page(0x1D);
    func_8011F360();
    io_poll(0xFF);
    if (io_just() == 0)
        goto L123860;
    latch(0x80);
L123860:
    func_80123878();
    return;
}
