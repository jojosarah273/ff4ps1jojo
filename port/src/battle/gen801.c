/* FF4 source-port — interpreted module for func_8011B7B4.
 * Ground truth: src/func_8011B7B4.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011B7B4(void)
{
    /* battle rows: 0x3D/0x3E windows, 0xFE5/0x1701 texts; gates
       6434(0x80/2) route the 4008(0x20) reads. */
    func_800F9200();
    cell_put(0x3D);
    open_row(0x3E);
    txt_set(0xFE5);
    if (gate(0x80) != 0)
        goto L11B81C;
    txt_set(0x1701);
    if (gate(2) != 0)
        goto L11B83C;
L11B81C:
    row_page(0x3D);
    sep_a();
    row_open_w(0x20);
    cell_put(0x3D);
L11B83C:
    row_close2();
    row_read(7);
    return;
}
