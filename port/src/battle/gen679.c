/* FF4 source-port — interpreted module for func_8011F030.
 * Ground truth: src/func_8011F030.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_8011F030(void)
{
    /* column rows: 0x29/0x2B/0x31/0x33 windows, 0xF7/0xFC codes,
       8011F118/8011F210 rows; loop L11F0D8 on 5DA0(0x32). */
    row_prep(0x20);
    row_read2(0x29);
    sep_a();
    cell_peek0(cell_state(0x2B));
    row_read2(0x2D);
    func_800F8274(0x31);
    row_prep_close();
    latch(0xF7);
    func_8011F118();
    func_800F9200();
    row_page(0x33);
    if (gate(2) != 0)
        goto L11F0D0;
    row_close2();
    return;
L11F0D0:
    row_close2();
L11f0d8:
    for (;;) {
        func_8011F210();
        poll_pair(0x32);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    latch(0xFC);
    func_8011F118();
    return;
}
